#include <stdio.h>

void bubbleSort(int array[], int n);
float average(int array[], int n);
float median(int array[], int n);
int mostFrequent(int array[], int n);
void printHist(int array[], int n);

int main()
{
    int n;
    printf("Vnesi dolzhina na niza: ");
    scanf("%d", &n);
    int array[n];
    printf("Vnesi gi elementite: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &array[i]);
    }
    bubbleSort(array, n);
    printf("Srednta vrednost na nizata e: %.2f\n", average(array, n));
    printf("Medijanata na nizata e: %.2f\n", median(array, n));
    printf("Najfrekventnata vrednost vo nizata e: %d\n", mostFrequent(array, n));
    printHist(array, n);
    return 0;
}

void bubbleSort(int array[], int n) {
    int pass, i, hold;
    for ( pass = 1; pass < n; pass++ ) {
        for ( i = 0; i < n - 1; i++ ) {
            if ( array[ i ] > array[ i + 1 ] ) {
                hold = array[ i ];
                array[ i ] = array[ i + 1 ];
                array[ i + 1 ] = hold;
            }
        }
    }
}

float average(int array[], int n) {
    int sum=0;
    for(int i=0; i<n; i++) {
        sum+=array[i];
    }
    return (float)sum/n;
}

float median(int array[], int n) {
    float median;
    if(n%2!=0) {
        median = array[n/2];
    }
    else {
        median = (float)(array[n/2] + array[n/2-1])/2;
    }
    return median;
}

int mostFrequent(int array[], int n) {
    int counter=0, max=0, element;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(array[i]==array[j]){
                counter++;
            }
        }
        if(counter > max) {
            max = counter;
            element = array[i];
        }
        counter=0;
    }
    return element;
}

void printHist(int array[], int n) {
    int counter=0, max=0, element;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(array[i]==array[j]){
                counter++;
            }
        }
        printf("%3d ", array[i]);
        for(int z=0; z<counter; z++) {
            printf("*");
        }
        printf("\n");
        counter=0;
    }
}













