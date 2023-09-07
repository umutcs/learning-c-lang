#include <stdio.h>
int main() {
    int i;
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    for (i = 0; i <= 5; i++) {
        printf("%d\n", numbers[i]);
    }

    int k;
    int j;
    int locations[1][2] = {{1, 2}};
    for (k = 0; k <= 0; k++) {  
        for (j = 0; j <= 1; j++) {
            printf("%d\n", locations[k][j]);
        }
    }

    return 0;
}

