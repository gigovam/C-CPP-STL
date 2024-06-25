#include <stdio.h>
#include <math.h>

int obratno(int n);

int main()
{
    int broj;
    printf("Vnesi cel broj: ");
    scanf("%d", &broj);
    printf("Vneseniot broj %d vo obraten redosled e: %d", broj, obratno(broj));
    return 0;
}

int obratno(int n) {
    int i=0, digit, result=0, broj=n;
    while(n%10!=0) {
        n/=10;
        i++;
    }

    while(i>0) {
        digit = broj%10;
        result += digit*pow(10, i-1);
        i--;
        broj/=10;
    }
    result+=broj*pow(10,i);

    return result;
}
