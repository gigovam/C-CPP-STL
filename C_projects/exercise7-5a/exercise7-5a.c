#include <stdio.h>

void selekcija(int array[], int n);

int main()
{
    int n;
    printf("Vnesi dolzhina na nizata: ");
    scanf("%d", &n);
    int array[n];
    printf("Vnesi elementi na nizata: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &array[i]);
    }
    selekcija(array,n);
    return 0;
}

void selekcija(int array[], int n) {
    int min = array[0];
    int counter=0;
    while(counter<n) {
    for(int i=counter; i<n ; i++) {
        if(array[i] < min) {
            min = array[i];
            array[i] = array[counter];
            array[counter] = min;
        }
    }
    counter++;
    min = array[counter];
    }
    for(int i=0; i<n; i++) {
        printf("%d ", array[i]);
    }
}
