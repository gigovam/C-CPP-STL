#include <stdio.h>

int main()
{
    int base = 200;
    float percentage=0.09, bonus, income=1, salary;
    while(1) {
    printf("Vnesi promet vo evra: \n");
    scanf(" %f", &income);
    if(income == -1) break;
    bonus = income*percentage;
    salary = base+bonus;
    printf("Platata e: %.2f evra\n", salary);
    }
    return 0;
}
