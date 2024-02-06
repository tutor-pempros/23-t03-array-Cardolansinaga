// 12S23006_Cardolan Sinaga

#include <stdio.h>

int main() {
    int n, i, nilai;
    int min = 101; // Inisialisasi nilai minimum dengan nilai yang tidak mungkin dicapai
    int max = -101; // Inisialisasi nilai maksimum dengan nilai yang tidak mungkin dicapai

    // Menerima masukan jumlah baris dan nilai-nilai
    scanf("%d", &n);

    // Menerima nilai-nilai dan mencari nilai minimum dan maksimum
    for (i = 0; i < n; i++) {
        scanf("%d", &nilai);

        // Memperbarui nilai minimum dan maksimum jika ditemukan nilai yang lebih kecil atau lebih besar
        if (nilai < min) {
            min = nilai;
        }
        if (nilai > max) {
            max = nilai;
        }
    }

    // Menampilkan nilai minimum dan maksimum
    printf("%d\n", min);
    printf("%d\n", max);

    return 0;
}
