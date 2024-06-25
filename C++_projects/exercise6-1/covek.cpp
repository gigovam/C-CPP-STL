#include "covek.h"
#include <string.h>

Covek::Covek() : ime(" "), prezime(" "), adresa(" "), broj(0) {}

Covek::Covek(char *ime, char *prezime, char *adresa, int broj) {
    strncpy(this->ime, ime, strlen(ime));
    this->ime[strlen(ime)] = '\0';
    strncpy(this->prezime, prezime, strlen(prezime));
    this->prezime[strlen(prezime)] = '\0';
    strncpy(this->adresa, ime, strlen(adresa));
    this->adresa[strlen(adresa)] = '\0';
    this->broj=broj;
}
