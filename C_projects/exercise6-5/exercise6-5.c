#include <stdio.h>

int fibonacci(int n);

int main()
{
    int n;
    printf("Vnesi cel broj: ");
    scanf("%d", &n);
    printf("Fibonaci od %d e %d", n, fibonacci(n));
    return 0;
}

int fibonacci(int n) {
    int i=0,j=1,x,counter=2;
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    while(counter<=n) {
        x=i+j;
        i=j;
        j=x;
        counter++;
    }
    return x;
}
