#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,sum;
    float c;
    for(a=1; a<=100; a++) {
        for(b=a; b<=100; b++) {
            sum = a*a+b*b;
            c = sqrt(sum);
            if(c==floor(c) && c<=100) {
                printf("%d e pitagorin broj.\n", (int)c);
            }
        }
    }
    return 0;
}
