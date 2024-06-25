#include <stdio.h>

int main()
{
    int sum=0, number=0;
    while(number != -1) {
        printf("Vnesi broj: ");
        scanf("%d", &number);
        sum+=number;
    }
    printf("Sumata e: %d", sum);
    return 0;
}
