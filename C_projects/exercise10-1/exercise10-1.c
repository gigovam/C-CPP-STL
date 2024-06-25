#include <stdio.h>

void mnoziSoStepenOdDva(unsigned broj, unsigned stepen);

int main()
{
    unsigned broj, stepen;
    printf("Vnesi broj: \n");
    scanf("%u", &broj);
    printf("Vnesi stepen: ");
    scanf("%u", &stepen);
    mnoziSoStepenOdDva(broj, stepen);
    return 0;
}

void mnoziSoStepenOdDva(unsigned broj, unsigned stepen) {
    printf("Rezultatot e: %d", broj<<=stepen);
}
