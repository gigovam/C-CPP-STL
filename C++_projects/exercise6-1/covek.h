#ifndef COVEK_H
#define COVEK_H

class Covek
{
private:
    char ime[20];
    char prezime[20];
    int broj;
    char adresa[30];
public:
    Covek();
    Covek(char*, char*, char*, int);
};

#endif // COVEK_H
