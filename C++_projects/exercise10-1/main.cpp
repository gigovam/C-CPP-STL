#include <iostream>

using namespace std;

class Vraboten {
protected:
    char *ime;
    char *prezime;
    int godinaVrabotuvanje;
public:
    Vraboten();
    Vraboten(char*, char*, int);
    void set(char*, char*, int);
    void print();
};

Vraboten::Vraboten() {}

Vraboten::Vraboten(char *ime, char* prezime, int god) {
    this->ime = ime;
    this->prezime = prezime;
    godinaVrabotuvanje = god;
}

void Vraboten::set(char* ime, char* prezime, int god) {
    this->ime = ime;
    this->prezime = prezime;
    godinaVrabotuvanje = god;
}

void Vraboten::print() {
    cout<<"Ime: "<<ime<<endl;
    cout<<"Prezime: "<<prezime<<endl;
    cout<<"Godina na vrabotuvanje: "<<godinaVrabotuvanje<<endl;
}

class Profesor : public Vraboten {
    int brPredmeti;
    char *oblast;
    char *zvanje;
public:
    Profesor(char *, char* , int , int , char *, char*);
    void set(char *, char *, int, int, char*, char*);
    void print();
};

Profesor::Profesor(char *ime, char* prezime, int god, int brPredmeti, char *oblast, char *zvanje)
    : Vraboten(ime, prezime, god){
    this->brPredmeti = brPredmeti;
    this->oblast = oblast;
    this->zvanje = zvanje;
}

void Profesor::set(char *ime, char* prezime, int god, int brPredmeti, char *oblast, char *zvanje) {
    Vraboten(ime, prezime, god);
    this->brPredmeti = brPredmeti;
    this->oblast = oblast;
    this->zvanje = zvanje;
}

void Profesor::print() {
    Vraboten::print();
    cout<<"Broj na predmeti: "<<brPredmeti<<endl;;
    cout<<"Oblast: "<<oblast<<endl;;
    cout<<"Zvanje: "<<zvanje<<endl;
}

class Asistent : public Vraboten {
    int brPredmeti;
    char *zvanje;
    char *mentor;
public:
    Asistent(char *, char* , int , int, char*, char*);
    void set(char *, char* , int , int, char*, char*);
    void print();
};

Asistent::Asistent(char *ime, char* prezime, int god, int brPredmeti, char *zvanje, char *mentor)
    : Vraboten(ime, prezime, god){
    this->brPredmeti = brPredmeti;
    this->zvanje = zvanje;
    this->mentor = mentor;
}

void Asistent::set(char *ime, char* prezime, int god, int brPredmeti, char *zvanje, char *mentor) {
    Vraboten(ime, prezime, god);
    this->brPredmeti = brPredmeti;
    this->zvanje = zvanje;
    this->mentor = mentor;
}

void Asistent::print() {
    Vraboten::print();
    cout<<"Broj na predmeti: "<<brPredmeti<<endl;;
    cout<<"Mentor: "<<mentor<<endl;;
    cout<<"Zvanje: "<<zvanje<<endl;
}

class Demonstrator : public Vraboten {
    char *rabotnoVreme;
public:
    Demonstrator(char *ime, char* prezime, int god, char *rabotnoVreme);
    void set(char *ime, char* prezime, int god, char *rabotnoVreme);
    void print();
};

Demonstrator::Demonstrator(char *ime, char *prezime, int god, char *rabotnoVreme)
    : Vraboten(ime, prezime, god) {
    this->rabotnoVreme = rabotnoVreme;
}

void Demonstrator::set(char *ime, char *prezime, int god, char *rabotnoVreme) {
    Vraboten(ime, prezime, god);
    this->rabotnoVreme = rabotnoVreme;
}

void Demonstrator::print() {
    Vraboten::print();
    cout<<"Rabotno vreme: "<<rabotnoVreme<<endl;;
}

int main()
{
    Vraboten* niza[20];
    niza[0] = new Profesor("pIme1", "pPrez1", 1, 5, "pOblast1", "pZvanje1");
    niza[1] = new Asistent("aIme1", "aPrez1", 1, 5, "aZvanje1", "aMentor1");
    niza[2] = new Demonstrator("dIme1", "dPrez1", 1, "09-17");
    int i = 3;
    int opcija = 0;
    while (opcija != 3) {
        cout << "1. Dodaj nov vraboten\n2. Pecati vraboteni\n3. Izlez\n";
        cin >> opcija;
        if (opcija == 1) {
            cout << "Izberi tip na vraboten:\n1. Profesor\n2. Asistent\n3. Demonstrator\n";
            int tip;
            cin >> tip;
            cout << "Vnesi ime, prezime i godina na vrabotuvanje:\n";
            char ime[20], prezime[20];
            int god;
            cin >> ime >> prezime >> god;
            if (tip == 1) {
                cout << "Vnesi broj na predmeti, oblast i zvanje:\n";
                int brPredmeti;
                char oblast[20], zvanje[20];
                cin >> brPredmeti >> oblast >> zvanje;
                niza[i] = new Profesor(ime, prezime, god, brPredmeti, oblast, zvanje);
            } else if (tip == 2) {
                cout << "Vnesi broj na predmeti, zvanje i mentor:\n";
                int brPredmeti;
                char zvanje[20], mentor[20];
                cin >> brPredmeti >> zvanje >> mentor;
                niza[i] = new Asistent(ime, prezime, god, brPredmeti, zvanje, mentor);
            } else if (tip == 3) {
                cout << "Vnesi rabotno vreme:\n";
                char rabotnoVreme[20];
                cin >> rabotnoVreme;
                niza[i] = new Demonstrator(ime, prezime, god, rabotnoVreme);
            }
            i++;
        } else if (opcija == 2) {
            for (int j = 0; j < i; j++) {
                niza[j]->print();
            }
        }
    }
    return 0;
}
