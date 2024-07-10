#include <iostream>
#include <map>
#include <string.h>

using namespace std;

class Uplata{
private:
    int id;
    char* ime;
    char* prezime;
    int broj;
    char* adresa;
    int uplata;
public:
    Uplata(){}
    Uplata(int id, char* ime, char* prezime, int broj, char* adresa, int uplata) {
        this->id=id;
        this->ime=ime;
        this->prezime=prezime;
        this->broj=broj;
        this->adresa=adresa;
        this->uplata=uplata;
    }
    void print() {
        cout<<"Id: "<<id<<endl;
        cout<<"Ime: "<<ime<<endl;
        cout<<"Prezime: "<<prezime<<endl;
        cout<<"Broj: "<<broj<<endl;
        cout<<"Adresa: "<<adresa<<endl;
        cout<<"Uplata: "<<uplata<<endl;
    }
};

int main()
{
    multimap<int, Uplata> uplati;
    int izbor=0;

    int id, broj, uplata;
    char ime[20], prezime[20], adresa[30];
    while(izbor!=3) {
        cout<<"1. Dodaj uplata.\n2. Prikazhi uplati za daden shtedach.\n3. Kraj."<<endl;
        cin>>izbor;
        if(izbor==1) {
            cout<<"Id: "; cin>>id;
            cout<<"Ime: "; cin>>ime;
            char *ptrIme = new char[strlen(ime)];
            strcpy(ptrIme, ime);
            cout<<"Prezime: "; cin>>prezime;
            char *ptrPrez = new char[strlen(prezime)];
            strcpy(ptrPrez, prezime);
            cout<<"Broj: "; cin>>broj;
            cout<<"Adresa: "; cin>>adresa;
            char *ptrAdresa = new char[strlen(adresa)];
            strcpy(ptrAdresa, adresa);
            cout<<"Uplata: "; cin>>uplata;
            pair<int, Uplata> p = pair(id, Uplata(id, ptrIme, ptrPrez, broj, ptrAdresa, uplata));
            uplati.insert(p);
        }
        else if(izbor==2) {
            cout<<"Vnesi id na shtedach: "; cin>>id;
            multimap<int, Uplata>::const_iterator i;
            for(i=uplati.begin(); i!=uplati.end(); i++) {
                if(id == i->first) {
                    Uplata u = i->second;
                    u.print();
                }
            }
        }
    }
    return 0;
}
