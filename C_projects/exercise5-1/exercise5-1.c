#include <stdio.h>

int main()
{
    int fahrenheit;
    float celsius;

    for(fahrenheit=0; fahrenheit<=212; fahrenheit++) {
    celsius = 5.0 /9.0 * (fahrenheit - 32);
    printf("%10d%+10.3f", fahrenheit, celsius);
    }
    return 0;

}






