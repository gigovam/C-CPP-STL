#include <iostream>
#include <string.h>

using namespace std;

class Lica {
protected:
    char *imeiprezime;
    int mat_br;
    int vozrast;
    char *adresa;
public:
    Lica(){};
    Lica(char *imeiprezime, int mat_br, int vozrast, char *adresa);
    char* getImePrezime();
    int getMatBr();
    int getVozrast();
    char* getAdresa();
};

Lica::Lica(char *imeiprezime, int mat_br, int vozrast, char *adresa) {
    this->imeiprezime = new char[strlen(imeiprezime) + 1];
    strcpy(this->imeiprezime, imeiprezime);
    this->mat_br = mat_br;
    this->vozrast = vozrast;
    this->adresa = new char[strlen(adresa) + 1];
    strcpy(this->adresa, adresa);
}

char* Lica::getImePrezime() { return imeiprezime; }

int Lica::getMatBr() { return mat_br; }

int Lica::getVozrast() { return vozrast; }

char* Lica::getAdresa() { return adresa; }

class Vraboteni : public Lica {
friend std::ostream& operator<<(std::ostream& os, const Vraboteni& vraboten);
protected:
    int kod;
public:
    Vraboteni(){};
    Vraboteni(char *imeiprezime, int mat_br, int vozrast, char *adresa, int kod);
    int getKod();
};

Vraboteni::Vraboteni(char *imeiprezime, int mat_br, int vozrast, char *adresa, int kod)
    : Lica(imeiprezime, mat_br, vozrast, adresa){
    this->kod = kod;
}

int Vraboteni::getKod() { return kod; }

std::ostream& operator<<(std::ostream& os, const Vraboteni& vraboten) {
    os << "Ime i przime:" << vraboten.imeiprezime<<endl;
    os << "Adresa:" << vraboten.adresa<<endl;
    os << "Vozrast:" << vraboten.vozrast<<endl;
    os << "Matichen broj:" << vraboten.mat_br<<endl;
    os << "Kod:" << vraboten.kod<<endl;
    return os;
}

class Klienti : public Lica {
friend std::ostream& operator<<(std::ostream& os, const Klienti& klient);
private:
    char *kod;
public:
    Klienti();
    Klienti(char *imeiprezime, int mat_br, int vozrast, char *adresa, char *kod);
    char* getKod();
};

Klienti::Klienti() {
    kod = new char [20];
}

Klienti::Klienti(char *imeiprezime, int mat_br, int vozrast, char *adresa, char *kod)
    : Lica(imeiprezime, mat_br, vozrast, adresa){
    this->kod = new char[strlen(kod) + 1];
    strcpy(this->kod, kod);
}

char* Klienti::getKod() { return kod; }

std::ostream& operator<<(std::ostream& os, const Klienti& klient) {
    os << "Ime i przime:" << klient.imeiprezime<<endl;
    os << "Adresa:" << klient.adresa<<endl;
    os << "Vozrast:" << klient.vozrast<<endl;
    os << "Matichen broj:" << klient.mat_br<<endl;
    os << "Kod:" << klient.kod<<endl;
    return os;
}


template <class T>
void pecatiPole(T *array, int n) {
    for(int i=0; i<n; i++) {
        cout<<array[i]<<endl;
    }
    cout<<endl;
}

int main()
{
    Vraboteni vraboteni[30];
    Klienti klienti[30];
    int izbor = 0, i=0, j=0;
    int vozrast, kodVraboten, matichen;
    char ime[20], adresa[30], kodKlient[10];
    while(izbor != 5) {
        cout<<"1. Vnesuvanje na podatoci za vraboten\n"
                "2. Vnesuvanje na podatoci za klient\n"
                "3. Pechatenje na lista na vraboteni\n"
                "4. Pechatenje na lista na klienti\n"
                "5. Kraj"<<endl;
        cin>>izbor;
        cin.ignore();
        if(izbor == 1) {
            cout<<"Vnesi ime i prezime: ";
            cin.getline(ime, 20);
            cout<<"Vnesi matichen broj: "; cin>>matichen;
            cout<<"Vnesi vozrast: "; cin>>vozrast;
            cin.ignore();
            cout<<"Vnesi adresa: "; cin.getline(adresa, 30);
            cout<<"Vnesi kod:"; cin>>kodVraboten;
            cin.ignore();
            Vraboteni vraboten(ime, matichen, vozrast, adresa, kodVraboten);
            vraboteni[i] = vraboten;
            i++;
        }
        else if(izbor == 2) {
            cout<<"Vnesi ime i prezime: ";
            cin.getline(ime, 20);
            cout<<"Vnesi matichen broj: "; cin>>matichen;
            cout<<"Vnesi vozrast: "; cin>>vozrast;
            cin.ignore();
            cout<<"Vnesi adresa: "; cin.getline(adresa, 30);
            cout<<"Vnesi kod:"; cin.getline(kodKlient, 10);
            Klienti klient(ime, matichen, vozrast, adresa, kodKlient);
            klienti[j] = klient;
            j++;
        }
        else if(izbor == 3) {
            pecatiPole(vraboteni, i);
        }
        else if(izbor == 4){
            pecatiPole(klienti, j);
        }
    }
    return 0;
}
