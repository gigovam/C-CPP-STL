#include <stdio.h>

int main()
{
    int size, i, sum=0;
    printf("Vnesi kolku denovi ima mesecot: ");
    scanf("%d", &size);
    int array[size];
    for(i=0; i<size; i++) {
        scanf("%d", &array[i]);
        sum+=array[i];
    }
    printf("Srednata temperatura e: %.2f", (float) sum/size);
    return 0;
}
