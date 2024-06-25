#include <iostream>

using std::cout;
using std::cin;
using std::endl;

template < class T >
T min( T value1, T value2)
{
    T min = value1;

    if ( value2 < min )
        min = value2;

    return min;
}

int main()
{
    int int1, int2;

    cout << "Vnesi 2 celi broja: ";
    cin >> int1 >> int2;
    cout << "Minimalniot cel broj e: "
         << min( int1, int2);

    double double1, double2;

    cout << "\nVnesi 2 double vrednosti: ";
    cin >> double1 >> double2;
    cout << "Minimalnata double vrednost e: "
         << min( double1, double2);

    char char1, char2;

    cout << "\nVnesi 2 karakteri: ";
    cin >> char1 >> char2;
    cout << "Minimalniot karakter e: "
         << min( char1, char2)
         << endl;

    return 0;
}


