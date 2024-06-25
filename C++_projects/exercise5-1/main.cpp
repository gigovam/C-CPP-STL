#include <iostream>
#include "zivotno.h"
#include "datum.h"

using std::cout;
using std::cin;
using std::endl;

using namespace std;

int main()
{
    int izbor=1, i=0;
    int den=18, mesec=6, godina=2024;
    char izborTip;
    char ime[20] = "";
    Zivotno zivotni[20];
    char tip, pol;
    int den1, mesec1, godina1;
    int den2, mesec2, godina2;
    int den3, mesec3, godina3;
    Zivotno zivotno = Zivotno();
    while(izbor != 6) {
    cout<<"Vnesi izbor: "<<endl;
    cin>>izbor;
    switch (izbor) {
    case 1:

        cout<<"Vnesi novo zivotno"<<endl;
        cout<<"Vnesi tip: "; cin>>tip;
        cout<<"Vnesi pol: "; cin>>pol;
        cout<<"Vnesi ime: ";
        cin.ignore(); // to ignore the leftover newline character
        cin.getline(ime, 20);

        cout<<"Vnesi datum na ragjanje"<<endl;
        cout<<"Den: "; cin>>den1;
        cout<<"Mesec: "; cin>>mesec1;
        cout<<"Godina: "; cin>>godina1;

        cout<<"Vnesi datum na priem"<<endl;
        cout<<"Den: "; cin>>den2;
        cout<<"Mesec: "; cin>>mesec2;
        cout<<"Godina: "; cin>>godina2;

        cout<<"Vnesi datum na posledna vakcinacija"<<endl;
        cout<<"Den: "; cin>>den3;
        cout<<"Mesec: "; cin>>mesec3;
        cout<<"Godina: "; cin>>godina3;

        zivotno = Zivotno(ime, tip, pol, den1, mesec1, godina1, den2, mesec2, godina2,
                                  den3, mesec3, godina3);

        zivotni[i] = zivotno;
        i++;
        break; 
    case 2:
        cout<<"Broj na zivotni: "<<i<<endl;
        break;

    case 3:
        cout<<"Vnesi tip na zivotni:"<<endl;
        cin>>izborTip;
        for(int j=0; j<=i; j++) {
            if(izborTip == zivotni[j].getTip()) {
                zivotni[j].prikaziPodatoci();
            }
        }
        break;

    case 4:
        cout<<"Lista na site zivotni"<<endl;
        for(int j=0; j<=i; j++) {
            zivotni[j].prikaziPodatoci();
        }
        break;

    case 5:
        cout<<"Zivotni shto treba da se vakciniraat vo rok od 1 nedela:"<<endl;
        for(int j=0; j<=i; j++) {
            if(zivotni[j].presmetajVakcinacija().getDen() + 7 < 26) {
                zivotni[j].prikaziPodatoci();
            }
        }
        break;
    }

    }
    return 0;
}
