#include <stdio.h>

int nzd(int a, int b);

int main()
{
    int a,b;
    printf("Vnesi dva celi broja: \n");
    scanf("%d %d", &a, &b);
    printf("Nivniot najgolem zaednicki delitel e: %d", nzd(a, b));
    return 0;
}

int nzd(int a, int b) {
    int max=a, nzd=1;
    if(a>b) max=b;
    for(int i=2; i<=max; i++) {
        if(a%i==0 && b%i==0)
            nzd = i;
    }

    return nzd;
}
