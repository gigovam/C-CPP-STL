#include <iostream>
#include "kocka.h"
#include "kvadar.h"
#include "kvadrat.h"
#include "pravoagolnik.h"

using namespace std;

int main()
{
    Kvadrat kvadrat(2, 2);
    Pravoagolnik pravoagolnik(2, 5), pravoagolnik1(3, 4);
    Kocka kocka(3, 3, 3);
    Kvadar kvadar(2, 3, 4);

    kvadrat.print();
    pravoagolnik.print();
    pravoagolnik1.print();
    kocka.print();
    kvadar.print();

    cout<<"Broj na kocki: "<<Kocka::getCounter()<<endl;
    cout<<"Broj na kvadrati: "<<Kvadrat::getCounter()<<endl;
    cout<<"Broj na kvadari: "<<Kvadar::getCounter()<<endl;
    cout<<"Broj na pravoagolnici: "<<Pravoagolnik::getCounter()<<endl;

    cout<<"Perimetar na kvadratot: "<<kvadrat.getPerimeter()<<endl;
    cout<<"Plostina na pravoagolnik1: "<<pravoagolnik1.getArea()<<endl;
    cout<<"Volumen na kvadarot: "<<kvadar.getVolume()<<endl;

    return 0;
}
