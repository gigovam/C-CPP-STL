#include <iostream>

using namespace std;

class Kvadrat {
friend std::ostream& operator<<(std::ostream& os, const Kvadrat& kvadrat);
private:
    int strana;
public:
    Kvadrat(){};
    Kvadrat(int a);
    int getStrana();
    int plostina();
};

class Pravoagolnik {
friend std::ostream& operator<<(std::ostream& os, const Pravoagolnik& pravoagolnik);
private:
    int sirina;
    int dolzina;
public:
    Pravoagolnik(){};
    Pravoagolnik(int a, int b);
    int getSirina();
    int getDolzina();
    int plostina();
};

Kvadrat::Kvadrat(int a) {
    strana = a;
}

int Kvadrat::getStrana() { return strana; }

int Kvadrat::plostina() { return strana*strana; }

std::ostream& operator<<(std::ostream& os, const Kvadrat& kvadrat) {
    os << "Strana:" << kvadrat.strana;
    return os;
}

Pravoagolnik::Pravoagolnik(int a, int b) {
    sirina = a;
    dolzina = b;
}

int Pravoagolnik::getDolzina() { return dolzina; }

int Pravoagolnik::getSirina() { return sirina; }

int Pravoagolnik::plostina() { return sirina*dolzina; }

std::ostream& operator<<(std::ostream& os, const Pravoagolnik& pravoagolnik) {
    os << "Sirina: " << pravoagolnik.sirina << " Dolzhina: " << pravoagolnik.dolzina;
    return os;
}

template <class T>
void pecatiPole(T *array, int n) {
    for(int i=0; i<n; i++) {
        cout<<array[i]<<endl;
    }
    cout<<endl;
}

template<class T>
void sortirajPole(T *array, int n) {
    T element;
    for(int i=0; i<n-1; i++) {
        for(int j=i; j<n; j++) {
            if(array[i].plostina() > array[j].plostina()) {
                element = array[i];
                array[i] = array[j];
                array[j] = element;
            }
        }
    }
}

int main()
{
    Kvadrat kvadrati[5];
    kvadrati[0] = Kvadrat(5);
    kvadrati[1] = Kvadrat(3);
    kvadrati[2] = Kvadrat(6);
    kvadrati[3] = Kvadrat(5);
    kvadrati[4] = Kvadrat(2);
    Pravoagolnik pravoagolnik[5];
    pravoagolnik[0] = Pravoagolnik(2, 3);
    pravoagolnik[1] = Pravoagolnik(3, 4);
    pravoagolnik[2] = Pravoagolnik(5, 2);
    pravoagolnik[3] = Pravoagolnik(7, 3);
    pravoagolnik[4] = Pravoagolnik(1, 2);
    cout<<"Pecatenje kvadrati:"<<endl;
    pecatiPole(kvadrati, 5);
    cout<<"Pecatenje pravoagolnici:"<<endl;
    pecatiPole(pravoagolnik, 5);

    sortirajPole(kvadrati, 5);
    pecatiPole(kvadrati, 5);
    sortirajPole(pravoagolnik, 5);
    pecatiPole(pravoagolnik, 5);

    return 0;
}
