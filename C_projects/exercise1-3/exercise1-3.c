#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The average is: %d\n", (a+b+c)/3);
    printf("The sum is: %d\n", a+b+c);
    printf("The product is: %d\n", a*b*c);
    return 0;
}
