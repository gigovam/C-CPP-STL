#include <iostream>
#include "kosuli.h"
#include "pantoloni.h"
#include <string.h>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    Artikl *niza[20];
    int nizaSize = 0;
    int opcija = 0;
    while (opcija != 5) {
        cout << "Vnesi opcija:\n1.Dodavanje artikl.\n2.Prikaz na artikli od dadena grupa.\n"
                "3.Prikaz na cela lista.\n4.Artikli shto treba da se nabavat vo rok od edna nedela i potrebni pari.\n"
                "5.Izlez" << endl;
        cin >> opcija;
        switch (opcija) {
        case 1: {
            cout << "Vnesi datum na posledna nabavka:" << endl;
            int den, mesec, godina;
            cout << "Den: "; cin >> den;
            cout << "Mesec: "; cin >> mesec;
            cout << "Godina: "; cin >> godina;
            Datum datum(den, mesec, godina);
            cout << "Za koshula vnesi k, za pantoloni p." << endl;
            char izbor;
            cin >> izbor;
            char ime[20];
            int golemina, cena;
            cout << "Ime: "; cin >> ime;
            cout << "Golemina: "; cin >> golemina;
            cout << "Cena: "; cin >> cena;
            char *imePtr = new char[strlen(ime) + 1];
            strcpy(imePtr, ime);
            if (izbor == 'k') {
                cout<<"Vnesi datum na sledna nabavka:";
                cout << "Den: "; cin >> den;
                cout << "Mesec: "; cin >> mesec;
                cout << "Godina: "; cin >> godina;
                Datum datumSlednaNabavka = Datum(den, mesec, godina);
                niza[nizaSize] = new Kosuli(imePtr, golemina, cena, datum, datumSlednaNabavka);
                nizaSize++;
            }
            else if (izbor == 'p') {
                niza[nizaSize] = new Pantoloni(imePtr, golemina, cena, datum);
                nizaSize++;
            }
            break;
        }
        case 2: {
            char bukva;
            cout << "Za koshula vnesi k, za pantoloni p." << endl;
            cin >> bukva;
            for (int j = 0; j < nizaSize; j++) {
                if (bukva == 'k' && dynamic_cast<Pantoloni*>(niza[j])) {
                    niza[j]->printArtikl();
                }
                else if (bukva == 'p' && dynamic_cast<Pantoloni*>(niza[j])) {
                    niza[j]->printArtikl();
                }
            }
            break;
        }
        case 3: {
            int vkCena = 0;
            for (int j = 0; j < nizaSize; j++) {
                niza[j]->printArtikl();
                vkCena += niza[j]->getCena();
            }
            cout << "Vkupnata cena e: " << vkCena << endl;
            break;
        }
        case 4: {
            int sum=0;
            for(int i=0; i<nizaSize; i++) {
                if(niza[i]->nabavkaOvaaNedela()) {
                    niza[i]->printArtikl();
                    sum+=niza[i]->getCena();
                }
            }
            cout<<"Vkupnata cena za site artikli: "<<sum<<endl;
            break;
        }
        }
    }

    for (int j = 0; j < nizaSize; j++) {
        delete niza[j];
    }

    return 0;
}
