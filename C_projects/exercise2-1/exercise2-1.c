#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter 2 numbers:\n");
    scanf("%d %d", &a, &b);
    if(a > b) {
        printf("The number %d is bigger than %d.", a, b);
    }
    else if(a < b){
        printf("The %d is smaller than %d", a, b);
    }
    else {
        printf("The numbers are equal.");
    }
    return 0;
}
