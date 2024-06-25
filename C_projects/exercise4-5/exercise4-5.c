#include <stdio.h>

int main()
{
    for(int i=1; i<=100; i++) {
        if(i%3!=0) {
            printf("Brojot %d ne e deliv so 3.\n", i);
        }
        continue;
    }
    return 0;
}
