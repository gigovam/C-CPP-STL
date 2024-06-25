#include <stdio.h>

int palindrom(char niza[], int size);

int main()
{
    int n;
    printf("Vnesi golemina na zborot: ");
    scanf("%d", &n);
    char niza[n];
    printf("Vnesi go zborot: ");
    scanf("%s", niza);
    if(palindrom(niza, n))
        printf("Zborot e palindrom.");
    else
        printf("Zborot ne e palindrom.");
    return 0;
}

int palindrom(char niza[], int size) {
    int j = size-1;
    for(int i=0; i<size; i++) {
        if(niza[i] != niza[j])
            return 0;
        j--;
    }
    return 1;
}
