#include <stdio.h>

int main()
{
    int sum=0, number;
    char c;
    while(c != 'n'){
        printf("Vnesi broj: ");
        scanf("%d", &number);
        sum+=number;
        printf("Ushte? (d/n): ");
        scanf(" %c", &c);
    }
    printf("Sumata e: %d", sum);
    return 0;
}
