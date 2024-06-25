#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, sum;
    printf("Enter 4 numbers: ");
    scanf_s("%d %d %d %d", &n1, &n2, &n3, &n4);
    sum = n1 + n2 + n3 + n4;
    printf("The sum is %d\n", sum);
    return 0;
}
