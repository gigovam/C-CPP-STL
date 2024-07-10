#include <iostream>

using namespace std;

template <class T>
class Zapis {
friend bool kontrolor(Zapis<T> &);
private:
    T x;
    T y;
    T z;
public:
    Zapis() {
        cout <<"x="; cin >> x; cout << endl;
        cout <<"y="; cin >> y; cout << endl;
        cout <<"z="; cin >> z; cout << endl;
    }

    T getX() { return x; }
    T getY() { return y; }
    T getZ() { return z; }
};

template<class T>
bool kontrolor(Zapis<T> &zapis) {
    return (zapis.getX() + zapis.getY() + zapis.getZ())>10000;
}

int main()
{
    Zapis<int> intZapis;
    Zapis<double> doubleZapis;
    if(kontrolor<int>(intZapis))
        cout<<"Zbirot na int zapisot e nad 10000"<<endl;
    else
        cout<<"Zbirot na int zapisot e pod 10000"<<endl;

    if(kontrolor<double>(doubleZapis))
        cout<<"Zbirot na double zapisot e nad 10000"<<endl;
    else
        cout<<"Zbirot na double zapisot e pod 10000"<<endl;
    return 0;
}
