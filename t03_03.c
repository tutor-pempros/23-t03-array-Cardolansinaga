// 12S23006_Cardolan Sinaga

#include <stdio.h>
#include <stdlib.h> // Library untuk fungsi abs (absolute value)

int main() {
    int n, i, nilai;
    int min = 101; // Inisialisasi nilai minimum dengan nilai yang tidak mungkin dicapai
    int max = -101; // Inisialisasi nilai maksimum dengan nilai yang tidak mungkin dicapai
    int total = 0; // Variabel untuk menyimpan total nilai
    int max_gap = 0; // Variabel untuk menyimpan jarak nilai terjauh

    // Menerima masukan jumlah baris dan nilai-nilai
    scanf("%d", &n);

    // Menerima nilai-nilai dan mencari nilai minimum, maksimum, total, dan jarak nilai terjauh
    for (i = 0; i < n; i++) {
        scanf("%d", &nilai);

        // Memperbarui nilai minimum dan maksimum jika ditemukan nilai yang lebih kecil atau lebih besar
        if (nilai < min) {
            min = nilai;
        }
        if (nilai > max) {
            max = nilai;
        }

        // Menambahkan nilai ke total
        total += nilai;

        // Menghitung jarak nilai terjauh
        if (i > 0) {
            int gap = abs(nilai - (nilai - 1)); // Menggunakan nilai sebelumnya untuk menghitung jarak
            if (gap > max_gap) {
                max_gap = gap;
            }
        }
    }

    // Menghitung nilai rata-rata
    float rata_rata = (float)total / n;

    // Menampilkan nilai minimum, maksimum, rata-rata, dan jarak nilai terjauh
    printf("%d\n", min);
    printf("%d\n", max);
    printf("%.2f\n", rata_rata);
    printf("%d\n", max_gap);

    return 0;
}
