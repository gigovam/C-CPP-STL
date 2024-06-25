#include <stdio.h>

int main()
{
    int god=0, mesec, den;
    while(1) {
    printf("Vnesi datum: \n");
    scanf("%4d%*c%2d%*c%2d", &god, &mesec, &den);
    if(god==-1 && mesec==-1 && den==-1) break;
    switch(mesec) {
    case 1:
        printf("Vneseniot datum e %d januari %d godina.\n", den, god);
        break;
    case 2:
        printf("Vneseniot datum e %d fevruari %d godina.\n", den, god);
        break;
    case 3:
        printf("Vneseniot datum e %d mart %d godina.\n", den, god);
        break;
    case 4:
        printf("Vneseniot datum e %d april %d godina.\n", den, god);
        break;
    case 5:
        printf("Vneseniot datum e %d maj %d godina.\n", den, god);
        break;
    case 6:
        printf("Vneseniot datum e %d juni %d godina.\n", den, god);
        break;
    case 7:
        printf("Vneseniot datum e %d juli %d godina.\n", den, god);
        break;
    case 8:
        printf("Vneseniot datum e %d avgust %d godina.\n", den, god);
        break;
    case 9:
        printf("Vneseniot datum e %d septemvri %d godina.\n", den, god);
        break;
    case 10:
        printf("Vneseniot datum e %d oktomvri %d godina.\n", den, god);
        break;
    case 11:
        printf("Vneseniot datum e %d noemvri %d godina.\n", den, god);
        break;
    default:
        printf("Vneseniot datum e %d dekemvri %d godina.\n", den, god);

    }
    }
    return 0;
}
