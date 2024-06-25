#include <iostream>
#include "zivotno.h"
#include "ptici.h"
#include "vlekaci.h"
#include "cicaci.h"
#include <string.h>

using namespace std;

int main()
{
    const int d = 10, m=10, g=2023;
    int izbor=0, i=0;
    Zivotno *zoo[30];
    while(izbor != 6) {
        cout<<"Vnesi izbor: 1.Dodaj zhivotno vo zoo.\n2.Prikazhi brojna sostojba.\n"
                "3.Prikazhi zhivotni od dadena grupa.\n4.Prikazhi gi site zhivotni.\n"
                "5.Prikazhi gi site zhivotni shto treba da se vakciniraat vo rok od 1 nedela.\n"
                "6.Izlez\n";
        cin>>izbor;
        cin.ignore();
        if(izbor == 1) {
            char bukva = ' ', pol = ' ';
            char ime[20];
            int den, mesec, godina;
            Datum datumRagjanje, datumPriem, datumPoslednaVakcinacija, datumSlednaVakcinacija;
            cout<<"Za dodavanje vlekach vnesi 'v', za cicach vnesi 'c', za ptica vnesi 'p'."<<endl;
            cin>>bukva;
            cin.ignore();
            cout<<"Vnesi ime: "<<endl;
            cin.getline(ime, 20);
            char *imePtr = new char[strlen(ime) + 1];
            strcpy(imePtr, ime);
            cout<<"Vnesi pol: "<<endl;
            cin>>pol;
            cin.ignore();

            cout<<"Vnesi datum na ragjanje"<<endl;
            cout<<"Den: "; cin>>den;
            cout<<"Mesec: "; cin>>mesec;
            cout<<"Godina: "; cin>>godina;
            datumRagjanje = Datum(den, mesec, godina);
            cout<<"Vnesi datum na priem vo zoo"<<endl;
            cout<<"Den: "; cin>>den;
            cout<<"Mesec: "; cin>>mesec;
            cout<<"Godina: "; cin>>godina;
            datumPriem = Datum(den, mesec, godina);
            cout<<"Vnesi datum na posledna vakcinacija"<<endl;
            cout<<"Den: "; cin>>den;
            cout<<"Mesec: "; cin>>mesec;
            cout<<"Godina: "; cin>>godina;
            datumPoslednaVakcinacija = Datum(den, mesec, godina);

            if(bukva == 'v') {
                cout<<"Vnesi datum za sledna vakcinacija"<<endl;
                cout<<"Den: "; cin>>den;
                cout<<"Mesec: "; cin>>mesec;
                cout<<"Godina: "; cin>>godina;
                datumSlednaVakcinacija = Datum(den, mesec, godina);
                Vlekaci *vlekac = new Vlekaci(datumRagjanje, datumPriem, pol, imePtr,
                                              datumPoslednaVakcinacija, datumSlednaVakcinacija);
                zoo[i] = vlekac;
            }
            else if(bukva == 'p') {
                char letac;
                cout<<"Vnesi 'd' ili 'n' za tip na letac: "; cin>>letac;
                Ptici *ptica = new Ptici(datumRagjanje, datumPriem, pol, imePtr,
                                         datumPoslednaVakcinacija, letac);
                zoo[i] = ptica;
            }
            else if(bukva == 'c') {
                char prezivar;
                cout<<"Vnesi 'd' ili 'n' za dali e prezivar: "; cin>>prezivar;
                Cicaci *cicac = new Cicaci(datumRagjanje, datumPriem, pol, imePtr,
                                           datumPoslednaVakcinacija, prezivar);
                zoo[i] = cicac;
            }
            i++;
        }
        else if(izbor == 2) {
            cout<<"Vo zoo ima "<<i<<" zivotno/i."<<endl;
        }
        else if(izbor == 3) {
            char grupa;
            cout << "Vnesi 'v' za vlekaci, 'p' za ptici, 'c' za cicaci: ";
            cin >> grupa;
            for (int j = 0; j < i; j++) {
                if (grupa == 'v' && dynamic_cast<Vlekaci*>(zoo[j])) {
                    zoo[j]->printZivotno();
                } else if (grupa == 'p' && dynamic_cast<Ptici*>(zoo[j])) {
                    zoo[j]->printZivotno();
                } else if (grupa == 'c' && dynamic_cast<Cicaci*>(zoo[j])) {
                    zoo[j]->printZivotno();
                }
            }
        }
        else if(izbor == 4) {
            for(int j=0; j<i; j++) {
                zoo[j]->printZivotno();
            }
        }
        else if(izbor == 5) {
            for(int j=0; j<i; j++) {
                Datum datum;
                datum = zoo[j]->presmetajVakcinacija();
                if(datum.getMesec() == m && datum.getGodina() == g && datum.getDen() >= d
                    && datum.getDen() <= (d+7)) {
                    zoo[j]->printZivotno();
                }
            }
        }
    }


    for(int j=0; j<i; j++) {
        delete zoo[j];
    }

    return 0;
}
