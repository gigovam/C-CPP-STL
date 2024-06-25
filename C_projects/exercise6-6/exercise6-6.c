#include <stdio.h>


int nzd(int a, int b, int i=2);

int main()
{
    int a, b;
    printf("Vnesi 2 broja: ");
    scanf("%d %d", &a, &b);
    printf("Nzd na %d i %d e %d.", a, b, nzd(a,b));
    return 0;
}

int nzd(int a, int b, int i=2) {
    int max = a, nzd=1;
    if(b > a) max=b;
    if(i==max) return nzd;
    else if(a%i==0 && b%i==0) {
        nzd = i;
        return nzd(a, b, i+1);
    }
    else return nzd(a, b, i+1);
}
