#include <stdio.h>

int main() {
    int i;
    int yas = 17;
    int* ptr = &yas;

    printf("Pointer value: %p\n", (void*)ptr);

    char* aile[4] = {"Umut", "Omurcan", "Aysel", "Oktay"};

    for (i = 0; i < 4; i++) {
        printf("%s\n", aile[i]);
        printf("%d\n",&aile[i]);
    }

    return 0;
}

