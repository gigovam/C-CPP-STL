#include <iostream>
#include <string.h>

using namespace std;

template <class T>
class Mnozestvo {
private:
    T mnozestvo[20];
    static int number;
public:
    Mnozestvo(){}
    void addElement(T elem);
    void printElements();
    static int getNumber() { return number; }
    T maxElement();
};

template <class T> int Mnozestvo<T>::number = 0 ;

template<class T>
void Mnozestvo<T>::addElement(T elem) {
    int flag=0;
    for(int i=0; i<number+1; i++) {
        if(mnozestvo[i] == elem) {
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"Elementot vekje go ima vo mnozhestvoto."<<endl;
    else
        mnozestvo[number++] = elem;
}

template <class T>
void Mnozestvo<T>::printElements() {
    for(int i=0; i<number; i++) {
        cout<<mnozestvo[i]<<" ";
    }
    cout<<endl;
}

template <class T>
T Mnozestvo<T>::maxElement() {
    T max = mnozestvo[0];
    for(int i=0; i<number; i++) {
        if(mnozestvo[i] > max)
            max = mnozestvo[i];
    }
    return max;
}

template <>
char* Mnozestvo<char*>::maxElement() {
    char* max = mnozestvo[0];
    for(int i=0; i<number; i++) {
        if(mnozestvo[i] > max)
            max = mnozestvo[i];
    }
    return max;
}

int main() {
    int izbor=0;
    Mnozestvo<int> A;
    Mnozestvo<double> B;
    Mnozestvo<char*> C;
    int elemInt;
    double elemDouble;
    char elemChar[20];

    while(izbor != 9) {
        cout<<"1. Dodaj element vo A\n"
                "2. Dodaj element vo B\n"
                "3. Dodaj element vo C\n"
                "4. Prekazhi go A\n"
                "4. Prekazhi go A\n"
                "5. Prekazhi go B\n"
                "6. Prekazhi go C\n"
                "7. Prikazhi najgolemi elementi\n"
                "8. Prikazhi broj na elementi vo mnozhestvata\n"
                "9. Kraj";
        cin>>izbor;
        if(izbor==1) {
            cin>>elemInt;
            A.addElement(elemInt);
        }
        else if(izbor==2) {
            cin>>elemDouble;
            B.addElement(elemDouble);
        }
        else if(izbor==3) {
            cin.ignore();
            cin.getline(elemChar, 20);
            char *ptr = new char[strlen(elemChar) + 1];
            strcpy(ptr, elemChar);
            C.addElement(ptr);
        }
        else if(izbor==4) {
            A.printElements();
        }
        else if(izbor==5) {
            B.printElements();
        }
        else if(izbor==6) {
            C.printElements();
        }
        else if(izbor==7) {
            cout<<"Najgolem element vo A: "<<A.maxElement()<<endl;
            cout<<"Najgolem element vo B: "<<B.maxElement()<<endl;
            cout<<"Najgolem element vo C: "<<C.maxElement()<<endl;
        }
        else if(izbor==8) {
            cout<<"Broj na elementi vo A: "<<A.getNumber();
            cout<<"Broj na elementi vo B: "<<B.getNumber();
            cout<<"Broj na elementi vo C: "<<C.getNumber();
        }
    }
    return 0;
}
