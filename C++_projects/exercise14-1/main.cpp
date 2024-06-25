#include <iostream>
#include <vector>
#include "oblik.h"
#include "kvadrat.h"
#include "pravoagolnik.h"
#include "krug.h"
#include "kvadar.h"
#include "cilindar.h"
#include "kocka.h"

using namespace std;

int main()
{
    int x, y, z;
    cout<<"Vnesi kvadrat"<<endl;
    cout<<"Strana: "<<endl; cin>>x;
    Kvadrat *kvadrat = new Kvadrat(x);

    cout<<"Vnesi pravoagolnik"<<endl;
    cout<<"Strana x: "<<endl; cin>>x;
    cout<<"Strana y: "<<endl; cin>>y;
    Pravoagolnik *pravoagolnik = new Pravoagolnik(x,y);

    cout<<"Vnesi krug"<<endl;
    cout<<"Radius: "<<endl; cin>>x;
    Krug *krug = new Krug(x);

    cout<<"Vnesi kvadar"<<endl;
    cout<<"Strana x: "<<endl; cin>>x;
    cout<<"Strana y: "<<endl; cin>>y;
    cout<<"Strana z: "<<endl; cin>>z;
    Kvadar *kvadar = new Kvadar(x,y,z);

    cout<<"Vnesi kocka"<<endl;
    cout<<"Strana x: "<<endl; cin>>x;
    Kocka *kocka = new Kocka(x);

    cout<<"Vnesi cilindar"<<endl;
    cout<<"Radius: "<<endl; cin>>x;
    cout<<"Visina: "<<endl; cin>>y;
    Cilindar *cilindar = new Cilindar(x,y);


    cout<<"Oblik 1:"<<endl;
    kvadrat->print();
    cout<<"Plostina: "<<kvadrat->plostina()<<endl;
    cout<<"Oblik 2:"<<endl;
    pravoagolnik->print();
    cout<<"Plostina: "<<pravoagolnik->plostina()<<endl;
    cout<<"Oblik 3:"<<endl;
    krug->print();
    cout<<"Plostina: "<<krug->plostina()<<endl;

    cout<<"Oblik 4:"<<endl;
    kvadar->print();
    cout<<"Plostina: "<<kvadar->plostina()<<endl;
    cout<<"Volumen: "<<kvadar->volumen()<<endl;
    cout<<"Oblik 5:"<<endl;
    cilindar->print();
    cout<<"Plostina: "<<cilindar->plostina()<<endl;
    cout<<"Volumen: "<<cilindar->volumen()<<endl;
    cout<<"Oblik 6:"<<endl;
    kocka->print();
    cout<<"Plostina: "<<kocka->plostina()<<endl;
    cout<<"Volumen: "<<kocka->volumen()<<endl;

    return 0;
}
