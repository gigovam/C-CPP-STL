//Primer za definicija i upotreba na function template



#include <iostream>



using std::cout;

using std::endl;



// Definicija na function template printArray


template< class T >  //*

void printArray( const T *array, const int count)//**

{
    for ( int i = 0; i < count; i++ ) {

        cout << array[ i ] << " ";
    }
    cout << endl;
} // Kraj na function template printArray

template< class T >  //*

int printArray( const T *array, const int count, const int lowSubscript, const int highSubscript )//**

{
    if(lowSubscript < 0 || highSubscript>=count)
        return 0;
    int counter=0;
    for ( int i = lowSubscript; i <= highSubscript; i++ ) {
        cout << array[ i ] << " ";
        counter++;
    }
    cout << endl;
    return counter;
} // Kraj na function template printArray



int main()

{

    const int aCount = 5;

    const int bCount = 7;

    const int cCount = 6;



    int a[ aCount ] = { 1, 2, 3, 4, 5 };

    double b[ bCount ] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };

    char c[ cCount ] = "HELLO";





    cout << "Poleto a sodrzi:" << endl;
    printArray(a, aCount);
    cout<<"Elementi pogmegju 2 i 6 pozicija:";
    cout<<printArray( a, aCount, 2, 6 );

    cout << "Poleto b sodrzi:" << endl;
    printArray(b, bCount);
    cout<<"Elementi pogmegju 1 i 3 pozicija:";
    cout<<printArray( b, bCount, 1, 3 );

    cout << "Poleto c sodrzi:" << endl;
    printArray(c, cCount);
    cout<<"Elementi pogmegju 0 i 4 pozicija:";
    cout<<printArray( c, cCount, 0, 4 );



    return 0;



} // kraj na main
