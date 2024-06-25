#include <stdio.h>

int main()
{
    int array[10], counter=0, product=1;
    printf("Enter 10 numbers: ");

    while(counter < 10){
            scanf("%d", &array[counter]);
        product*=array[counter];
        counter++;
    }

    printf("The product is: %d", product);
    return 0;
}
