#include <stdio.h>


void dzvezdi(int n);

int main()
{
    int n;
    printf("Vnesi broj: ");
    scanf("%d", &n);
    dzvezdi(n);
    return 0;
}

void dzvezdi(int n) {
    if(n==1) printf("*");
    else {
        for(int i=1; i<=n; i++) {
            printf("*");
        }
        printf("\n");
        dzvezdi(n-1);
    }
}
