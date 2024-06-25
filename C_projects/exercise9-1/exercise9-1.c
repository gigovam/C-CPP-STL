#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char niza[15], *token;
    char phoneNumber[10] = "";
    int countryCode;
    long phoneNumberLong;

    printf("Vnesi telefonski broj vo oblik: (ddd) ddd-dddd\n");
    fgets(niza, sizeof(niza), stdin);

    token = strtok(niza, "()");
    if (token != NULL) {
        countryCode = atoi(token);
    }

    token = strtok(NULL, " -");
    if (token != NULL) {
        strcat(phoneNumber, token);
    }

    token = strtok(NULL, " -");
    if (token != NULL) {
        strcat(phoneNumber, token);
    }

    phoneNumberLong = atol(phoneNumber);

    printf("Kod na drzavata: %d\n", countryCode);
    printf("Sedomcifren telefonski broj: %ld\n", phoneNumberLong);

    return 0;
}


