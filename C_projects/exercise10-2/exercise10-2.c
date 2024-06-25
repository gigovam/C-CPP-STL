#include <stdio.h>

void prevrtiBitovi(unsigned broj);

int main()
{
    unsigned broj;
    printf("Vnesi broj: \n");
    scanf("%u", &broj);
    prevrtiBitovi(broj);
    return 0;
}

void prevrtiBitovi(unsigned broj) {
    printf("Originalniot broj e: %u\n", broj);
    int i;
    unsigned mask = 1<<31;
    unsigned broj2 = ~broj;
    printf("Vneseniot broj vo biinaren format e: ");
    for(i=1; i<=32; i++) {
        if(mask & broj)
            printf("1");
        else
            printf("0");
        broj<<=1;
        if(i%8==0)
            printf(" ");

    }
    printf("\nBrojot so prevrteni bitovi e: ");
    for(i=1; i<=32; i++) {
        if(mask & broj2)
            printf("1");
        else
            printf("0");
        broj2<<=1;
        if(i%8==0)
            printf(" ");

    }
}
