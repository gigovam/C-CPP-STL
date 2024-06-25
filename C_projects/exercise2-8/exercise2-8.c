#include <stdio.h>

int main()
{
    int x = 1;
    x++;
    printf("First option: %d\n", x);
    x=1;
    ++x;
    printf("Second option: %d\n", x);
    x=1;
    x = x+1;
    printf("Third option: %d\n", x);
    x=1;
    x+=1;
    printf("Forth option: %d", x);
    return 0;
}
