#include <stdio.h>
int main () {
    float pilihan, pertama, kedua, hasil;
    while (1) {
    printf("Pilih Program");
    printf("\n1. Penjumlahan");
    printf("\n2. Pengurangan");
    printf("\n3. Perkalian");
    printf("\n4. Pembagian");
    printf("\n5. Exit");
    printf("\nMasukkan Pilihan : ");
    scanf("%f", &pilihan);
    if (pilihan==5) {
        printf("Terimakasih telah menggunakan kalkulator SITI AINUR RAHMAWATI");
        break;}
    else if (pilihan>= 1 && pilihan <= 4) {
        printf("Masukkan nilai pertama : ");
        scanf("%f", &pertama);
        printf("Masukkan nilai kedua : ");
        scanf("%f", &kedua);
        if (pilihan==1) {
            hasil= pertama + kedua;
            printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", pertama, kedua, hasil);
        } else if (pilihan==2) {
            hasil= pertama - kedua;
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", pertama, kedua, hasil);
        } else if (pilihan==3) {
            hasil= pertama * kedua;
            printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", pertama, kedua, hasil);
        } else if (pilihan==4) {
            hasil= pertama / kedua;
            printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", pertama, kedua, hasil);
        }
    } else {
        printf("Input anda salah, silahkan coba lagi\n");
    }
    }
}