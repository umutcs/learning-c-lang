#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

void KitapListele() {
    struct dirent *entry;
    DIR *dp = opendir(".");
    
    if (dp == NULL) {
        perror("Klasör açilamadi");
        return;
    }

    printf("Mevcut dizindeki kitaplar:\n");

    while ((entry = readdir(dp))) {
        if (strstr(entry->d_name, ".txt")) {
            printf("%s\n", entry->d_name);
        }
    }

    closedir(dp);
}
struct Kitap {
    int sayfaSayisi;
    char kitapAdi[100];
    char yazarAdi[100];
};

void KitapEkle() {
    FILE *fptr;
    struct Kitap kitap;
    
    printf("Eklenecek Kitabin adi : \n");
    scanf("%s", kitap.kitapAdi);
    
    printf("Kitabin yazari : \n");
    scanf("%s", kitap.yazarAdi);
    
    printf("Kitabin sayfa sayisi : \n");
    scanf("%d", &kitap.sayfaSayisi);

    char dosyadi[200]; 
    
    snprintf(dosyadi, sizeof(dosyadi), "%s.txt", kitap.kitapAdi);
    
    fptr = fopen(dosyadi, "a");
    
    if (fptr == NULL) {
        printf("Dosya acilamadi!\n");
        return;
    }
    
    fprintf(fptr, "Kitap Adi: %s\n", kitap.kitapAdi);
    fprintf(fptr, "Yazar Adi: %s\n", kitap.yazarAdi);
    fprintf(fptr, "Sayfa Sayisi: %d\n", kitap.sayfaSayisi);
    
    fclose(fptr);
    
    printf("%s isimli kitap eklendi!\n", kitap.kitapAdi);
}

int main() {
	
    	KitapEkle();
    	KitapListele();

    return 1;
}

