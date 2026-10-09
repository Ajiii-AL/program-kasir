#include <stdio.h>

int main() {

    int jenis_pelanggan;
    int total_belanja;
    int jumlah_barang;
    int diskon = 0;
    int diskon_barang = 0;
    int total_bayar;

    printf("Masukkan jenis pelanggan (1. Member, 2. Umum): ");
    scanf("%d", &jenis_pelanggan);

    printf("Masukkan jumlah beli: ");
    scanf("%d", &jumlah_barang);

    printf("Masukkan total belanja: ");
    scanf("%d", &total_belanja);

    // Validasi data
    if (jenis_pelanggan != 1 && jenis_pelanggan != 2) {
        printf("Jenis pelanggan tidak valid\n");

    } else if (total_belanja <= 0 || jumlah_barang <= 0) {
        printf("Data belanja tidak valid\n");

    } else {

        // Pelanggan member
        if (jenis_pelanggan == 1) {

            if (total_belanja >= 500000 &&
                total_belanja <= 1000000) {

                diskon = total_belanja * 10 / 100;

            } else if (total_belanja > 1000000) {

                diskon = total_belanja * 15 / 100;
            }

        // Pelanggan umum
        } else if (jenis_pelanggan == 2) {

            if (total_belanja >= 1000000) {
                diskon = total_belanja * 5 / 100;
            }
        }

        // Diskon tambahan jika membeli minimal 10 barang
        if (jumlah_barang >= 10) {
            diskon_barang = 20000;
        }

        // Hitung total pembayaran
        total_bayar = total_belanja - diskon - diskon_barang;

        printf("\n===== STRUK BELANJA =====\n");
        printf("Total belanja       : Rp%d\n", total_belanja);
        printf("Diskon persentase   : Rp%d\n", diskon);
         printf("Diskon jumlah barang: Rp%d\n", diskon_barang);
        printf("Total pembayaran   : Rp%d\n", total_bayar);
    }

    return 0;
}