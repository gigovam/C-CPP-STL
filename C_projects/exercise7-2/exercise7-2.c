#include <stdio.h>

void prosti(int array[], int size);

int main()
{
    int n;
    printf("Vnesi dolzhina na nizata: ");
    scanf("%d", &n);
    int array[n];
    for(int i=0; i<n; i++) {
        array[i] = 1;
    }
    prosti(array, n);

    return 0;
}

void prosti(int array[], int size) {
    int counter = 0;
    array[0] = 0;
    array[1] = 0;
    for(int i=1; i<size; i++) {
        for(int j=1; j<=i; j++) {
            if(i%j==0)
                counter++;
        }
        if(counter==2)
            array[i]=0;
        counter = 0;
    }
    for(int i=0; i<size; i++) {
        printf("%d ", array[i]);
    }
}
