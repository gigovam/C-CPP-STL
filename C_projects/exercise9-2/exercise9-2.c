#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char niza[11], *den, *mesec, *godina;
    int mesecInt;

    while(strcmp(niza, "!")!=0) {
    printf("Vnesi datum vo sledniot format: dd/mm/yyyy\n");
    scanf("%s", niza);

    den = strtok(niza, "/");

    if(den != NULL) {
        mesec = strtok(NULL, " /");
    }
    if(mesec != NULL) {
        godina = strtok(NULL, " /");
    }

    mesecInt = atoi(mesec);

    switch (mesecInt) {
    case 1:
        mesec = "januari";
        break;
    case 2:
        mesec = "fevruari";
        break;
    case 3:
        mesec = "mart";
        break;
    case 4:
        mesec = "april";
        break;
    case 5:
        mesec = "maj";
        break;
    case 6:
        mesec = "juni";
        break;
    case 7:
        mesec = "juli";
        break;
    case 8:
        mesec = "avgust";
        break;
    case 9:
        mesec = "septemvri";
        break;
    case 10:
        mesec = "oktomvri";
        break;
    case 11:
        mesec = "noemvri";
        break;
    case 12:
        mesec = "dekemvri";
        break;
    }

    printf("%s %s %s\n", den, mesec, godina);
}


    return 0;
}
