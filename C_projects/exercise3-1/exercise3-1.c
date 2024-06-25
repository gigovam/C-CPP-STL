/* Program: p04_01.c
   Demonstracija na case
   Dava broj na denovi vo mesec */
#include <stdio.h>

/* Koga kje se trgnat break naredbite, se izvrshuvaat site izrazi do kraj na switch naredbata.
Na primer koga mesec=5 se pechatat site izrazi, dodeka koga mesec=2 se pechatat samo poslednite dve.*/

/* pocnuva izvrshuvanjeto */
int main()
{
    int mesec;              /* definiraj promenliva za mesec*/

    printf("Vnesi go mesecot so negoviot reden broj: ");
    scanf("%d", &mesec);

    /* vo zavisnost od vneseniot mesec najdi kolku dena ima */
    switch (mesec) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Ima 31 den\n");
        //break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Ima 30 dena\n");
        //break;
    case 2:
        printf("Vo prestapni godini ima 29, a vo obichni 28 dena\n");
        //break;
    default:
        printf("Greshen broj na mesec!\n");
    } /* kraj na switch (mesec) */

    return 0; /* uspeshen kraj na programot */

} /* kraj na fukncijata main */

