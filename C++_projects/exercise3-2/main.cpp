#include <iostream>

using namespace std;

class Stedac
{
public:
    void vnesi_podatoci();
    void prikazi_podatoci();
    void uplata(unsigned long i);
    void isplata(unsigned long i);
    long sostojba();

private:
    int broj;
    char imeprezime[30], adresa[50];
    long saldo;
};

void Stedac::vnesi_podatoci() {
    cout<<"Vnesi podatoci za shtedach:"<<endl;
    cout<<"broj: "; cin>>broj;
    cout<<"ime i prezime: "; cin>>imeprezime;
    cout<<"adresa: "; cin>>adresa;
    cout<<"saldo: "; cin>>saldo;
}

void Stedac::prikazi_podatoci() {
    cout<<"Podatocite za shtedachot se:"<<endl;
    cout<<"Broj: "<<broj<<endl;
    cout<<"Ime i prezime: "<<imeprezime<<endl;
    cout<<"Adresa: "<<adresa<<endl;
    cout<<"Saldo: "<<saldo<<endl;
}

void Stedac::uplata(unsigned long i) {
    cout<<"Uplata na slednata suma: "<<i<<endl;
    saldo += i;
}

void Stedac::isplata(unsigned long i) {
    cout<<"Isplata na slednata suma: "<<i<<endl;
    if(saldo>=i) {
        saldo-=i;
    }
    else
        cout<<"Nemate dovolno pari na vashata smetka."<<endl;
}

long Stedac::sostojba() {
    return saldo;
}

int main()
{
    unsigned long uplata, isplata;
    Stedac stedac;

    stedac.vnesi_podatoci();
    stedac.prikazi_podatoci();
    cout<<"Vnesi suma za uplata: "<<endl;
    cin>>uplata;
    stedac.uplata(uplata);
    cout<<"Sostojbata na smetkata e: "<<stedac.sostojba()<<endl;
    cout<<"Vnesi suma za isplata: "<<endl;
    cin>>isplata;
    stedac.isplata(isplata);
    cout<<"Sostojbata na smetkata e: "<<stedac.sostojba()<<endl;
    return 0;
}
