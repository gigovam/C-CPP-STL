#include <stdio.h>

int paren(int n);

int main()
{
    int broj;
    for(int i=0; i<10; i++) {
        printf("Vnesi cel broj: ");
        scanf("%d", &broj);
        if(paren(broj)) {
            printf("Brojot %d e paren.\n", broj);
        }
        else
            printf("Brojot %d e neparen.\n", broj);
    }
    return 0;
}

int paren(int n) {
    if(n%2==0)
        return 1;
    else
        return 0;
}
