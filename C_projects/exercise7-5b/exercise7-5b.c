#include <stdio.h>

void selekcija(int array[], int n, int counter, int min);

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
    selekcija(array,n,0,array[0]);
    return 0;
}

/* Razlikata so bubble sort e vo toa shto tamu se izminuva nizata nekolku pati,
 * se sporeduvaat sosednite elementi i se zamenuvaat, dodeka vo ovoj algoritam
 * se izminuva nizata nekolku pati i najmaliot element se stava na seldnata najmala pozicija.
 */

void selekcija(int array[], int n, int counter, int min) {
    if(counter < n) {
        for(int i=counter; i<n ; i++) {
            if(array[i] < min) {
                min = array[i];
                array[i] = array[counter];
                array[counter] = min;
            }
        }
        min = array[counter+1];
        selekcija(array,n,counter+1,min);
    }
    else {
        for(int i=0; i<n; i++) {
            printf("%d ", array[i]);
        }
    }
}
