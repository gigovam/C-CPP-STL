#include <stdio.h>

int main()
{
    int number, a, b, c, d, e;
    printf("Enter number with 5 digits: \n");
    scanf("%d", &number);
    e = number%10;
    d = number/10%10;
    c = number/100%10;
    b = number/1000%10;
    a = number/10000%10;
    printf("The digits are:\n");
    printf("%d   %d   %d   %d   %d", a, b, c, d, e);
    return 0;
}
