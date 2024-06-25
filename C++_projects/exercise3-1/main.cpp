#include <iostream>
using namespace std;

class Kvadar {
private:
    int a;
    int b;
    int c;
public:
    int ploshtina();
    int volumen();
    void set();
    void get();
    bool kocka();
};

int Kvadar::ploshtina() {
    return 2*(a*b + a*c + b*c);
}

int Kvadar::volumen() {
    return a*b*c;
}

void Kvadar::set() {
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;
}

void Kvadar::get() {
    cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
}

bool Kvadar::kocka() {
    return (a==b==c);
}

int main()
{
    int option;
    Kvadar niza[10];
    //Kvadar *kvadar;
    int counter=0;
    int number;
    Kvadar min = niza[0];
    for(int j=0; j<10; j++) {
        cout<<"Vnesi opcija: 1, 2, 3, 4 ili 5."<<endl;
    cin>>option;
    switch (option) {
    case 1:
        cout<<"Kreiraj nov objekt:"<<endl;
        niza[j].set();
        counter++;
        break;
    case 2:
        cout<<"Postavi gi dimenziite:"<<endl;
        niza[j].set();
        counter++;
        break;
    case 3:
        cout<<"Pecati gi dimenziite na site objekiti:"<<endl;
        for(int i=0; i<counter; i++) {
            cout<<"Element: "<<i<<endl;
            niza[i].get();
        }
        break;
    case 4:
        cout<<"Ispercati dimenzii za konkreten objekt:"<<endl;
        cout<<"Vnesi reden broj na objektot:"<<endl;
        cin>>number;
        if(number<=counter) {
            niza[number].get();
        }
        break;
    case 5:
        cout<<"Pecati gi onie shto go zadovoluvaat uslovot:"<<endl;
        for(int i=0; i<counter; i++) {
            if(niza[i].ploshtina() < min.ploshtina() && !niza[i].kocka()){
                min = niza[i];
            }
        }
        cout<<"Najmala ploshtina ima objektot so parametri: "<<endl;
        min.get();
        break;
    }

}
    return 0;
}
