#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

class Pravoagolnik{
friend ostream & operator <<(ostream &output, Pravoagolnik p);
friend bool operator<(Pravoagolnik p1, Pravoagolnik p2);
friend bool operator==(Pravoagolnik p1, Pravoagolnik p2);
private:
    int a;
    int b;
public:
    Pravoagolnik(){}
    Pravoagolnik(int a, int b) {
        this->a = a;
        this->b = b;
    }
    int getArea() { return a*b; }
};

ostream & operator <<(ostream &output, Pravoagolnik p) {
    output << "Strana a="<<p.a<<endl;
    output << "Strana b="<<p.b<<endl;
    return output;
}

bool operator<(Pravoagolnik p1, Pravoagolnik p2) {
    return p1.getArea() < p2.getArea();
}

bool operator==(Pravoagolnik p1, Pravoagolnik p2) {
    return p1.a == p2.a && p1.b == p2.b;
}

class Kvadrat{
friend ostream & operator <<(ostream &output, Kvadrat k);
friend bool operator<(Kvadrat k1, Kvadrat k2);
friend bool operator==(Kvadrat k1, Kvadrat k2);
private:
    int a;
public:
    Kvadrat(){}
    Kvadrat(int a) { this->a = a; }
    int getArea() { return a*a; }
};

ostream & operator <<(ostream &output, Kvadrat k) {
    output << "Strana a="<<k.a<<endl;
    return output;
}

bool operator<(Kvadrat k1, Kvadrat k2) {
    return k1.getArea() < k2.getArea();
}

bool operator==(Kvadrat k1, Kvadrat k2) {
    return k1.a == k2.a;
}


class Krug{
friend ostream& operator <<(ostream &output, Krug k);
friend bool operator<(Krug k1, Krug k2);
friend bool operator==(Krug k1, Krug k2);
private:
    int r;
public:
    Krug(){}
    Krug(int r) { this->r=r; }
    int getArea() { return r*r*3.14; }
    void print() { cout<<"Radius r="<<r<<endl; }
};

ostream& operator <<(ostream &output, Krug k) {
    output << "Radius r="<<k.r<<endl;
    return output;
}

bool operator<(Krug k1, Krug k2) {
    return k1.getArea() < k2.getArea();
}

bool operator==(Krug k1, Krug k2) {
    return k1.r == k2.r;
}

template<class T>
class Mnozestvo{
private:
    vector<T> vec;
public:
    Mnozestvo(){}
    Mnozestvo(const vector<T> &vec) { this->vec = vec; }
    vector<T> getMnozestvo() { return vec; }
    void add(const T &element) {
        int flag=1;
        typename vector<T>::const_iterator iterator;
        for(iterator=vec.begin(); iterator!=vec.end(); iterator++) {
            if(element == *iterator)
                flag=0;
        }
        if(flag)
            vec.push_back(element);
    }
    T max() {
        T max = *vec.begin();
        typename vector<T>::const_iterator iterator;
        for(iterator=vec.begin(); iterator!=vec.end(); iterator++) {
            if(max < *iterator)
                max = *iterator;
        }
        return max;
    }
};

template<class T>
void print(const Mnozestvo<T> mnozestvo) {
    vector<T> vec = mnozestvo.getMnozestvo();
    typename vector<T>::const_iterator i;
    for(i = vec.begin(); i!=vec.end(); i++) {
        cout<<*i;
    }
}

int main()
{
    int izbor=0, a, b, r;
    Mnozestvo<Pravoagolnik> pravoagolnici;
    Mnozestvo<Kvadrat> kvadrati;
    Mnozestvo<Krug> krugovi;
    while(izbor != 9) {
        cout<<"1.Dodaj pravoagolnik.\n2.Dodaj kvadrat.\n3.Dodaj krug\n4.Prikazhi pravoagolnici.\n"
                "5.Prikazhi kvadrati.\n6.Prikazhi krugovi\n7.Prikazhi najgolemi elementi.\n"
                "8.Prikazhi broj na elementi vo mnozhestvata.\n";
        cin>>izbor;
        if(izbor==1) {
            cout<<"a="; cin>>a;
            cout<<"b="; cin>>b;
            Pravoagolnik pravoagolnik(a, b);
            pravoagolnici.add(pravoagolnik);
        }
        else if(izbor==2) {
            cout<<"a="; cin>>a;
            Kvadrat kvadrat(a);
            kvadrati.add(kvadrat);
        }
        else if(izbor==3) {
            cout<<"r="; cin>>r;
            Krug krug(r);
            krugovi.add(krug);
        }
        else if(izbor==4) {
            for(Pravoagolnik p : pravoagolnici.getMnozestvo())
                cout<<p;
        }
        else if(izbor==5) {
            for(Kvadrat k : kvadrati.getMnozestvo())
                cout<<k;
        }
        else if(izbor==6) {
            for(Krug k : krugovi.getMnozestvo())
                cout<<k;
        }
        else if(izbor==7) {
            cout<<"Najgolem pravoagolnik: "<<pravoagolnici.max()<<endl;
            cout<<"Najgolem kvadrat: "<<kvadrati.max()<<endl;
            cout<<"Najgolem krug: "<<krugovi.max();
        }
        else if(izbor==8) {
            cout<<"Broj na pravoagolnici: "<<pravoagolnici.getMnozestvo().size()<<endl;
            cout<<"Broj na kvadrati: "<<kvadrati.getMnozestvo().size()<<endl;
            cout<<"Broj na krugovi: "<<krugovi.getMnozestvo().size()<<endl;
        }

    }
    return 0;
}
