#include<stdio.h>
int main(){


    int i;
    for (i = 0; i < 100; i++)
    {
        if (i % 25 != 0)
        {
            printf("%d\n",i);
        }
        continue;
    }
    return 0;
}
