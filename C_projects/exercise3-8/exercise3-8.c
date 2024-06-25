#include <stdio.h>

int main()
{
    float price1=50.5, price2=45.6, price3=32.8, price4=65.3, price5=20.0;
    float p1=0, p2=0, p3=0, p4=0, p5=0, total;
    int counter=1;
    int id, quantity;
    while(counter <= 5){
        printf("Vnesi broj na proizvodot i kolichina:\n");
        scanf(" %d %d", &id, &quantity);
        switch(id) {
        case 1: p1+=(price1*quantity);
            break;
        case 2: p2+=(price2*quantity);
            break;
        case 3: p3+=(price3*quantity);
            break;
        case 4: p4+=(price4*quantity);
            break;
        case 5: p5+=(price5*quantity);
            break;
        default: printf("Proizvodot ne postoi.\n");
        }
        counter++;
    }
    total = p1+p2+p3+p4+p5;
    printf("Vrednosta od proizvodot 1 e: %.2f\n", p1);
    printf("Vrednosta od proizvodot 2 e: %.2f\n", p2);
    printf("Vrednosta od proizvodot 3 e: %.2f\n", p3);
    printf("Vrednosta od proizvodot 4 e: %.2f\n", p4);
    printf("Vrednosta od proizvodot 5 e: %.2f\n", p5);
    printf("Vrednosta od site proizvodi e: %.2f", total);
    return 0;
}
