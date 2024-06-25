#include <stdio.h>

int main()
{
    int sum = 0, counter=1, n=10;
    while(counter <= n) {
        sum+=counter;
        counter++;
    }
    printf("The sum is: %d", sum);
    return 0;
}
