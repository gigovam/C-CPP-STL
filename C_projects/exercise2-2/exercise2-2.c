#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter 2 numbers:\n");
    scanf("%d %d", &a, &b);
    if(a%2==0 && b%2==0) {
        printf("The numbers are even.");
    }
    else if(a%2!=0 && b%2!=0) {
        printf("The numbers are odd.");
    }
    else {
        printf("One of the numbers is even, the other one is odd.");
    }
    return 0;
}
