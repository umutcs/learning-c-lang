#include<stdio.h>

int main() {
    int sayi1;
    int sayi2;
    double toplam;
    double fark;
    double bolum;
    double carpma;
    int islemNo;

    printf("Sayi giriniz: ");
    scanf("%d", &sayi1);
    printf("Ikinci sayi: ");
    scanf("%d", &sayi2);

    printf("Islem No giriniz: 1 toplama 2 cikarma 3 bolme 4 carpma\n");
    scanf("%d", &islemNo);

    switch (islemNo) {
        case 1:
            toplam = sayi1 + sayi2;
            printf("Toplam: %.2lf\n", toplam);
            break;
        case 2:
            fark = sayi1 - sayi2;
            printf("Fark: %.2lf\n", fark);
            break;
        case 3:
            if (sayi2 == 0) {
                printf("Bolme islemi sifira bolunemez.\n");
            } else {
                bolum = (double)sayi1 / sayi2;
                printf("Bolum: %.2lf\n", bolum);
            }
            break;
        case 4:
            carpma = sayi1 * sayi2;
            printf("Carpma: %.2lf\n", carpma);
            break;
        default:
            printf("Gecersiz islem numarasi!\n");
    }
    return 0;
}

