//Primer za definicija i upotreba na function template

#include <iostream>

using std::cout;
using std::endl;


// Definicija na function template printArray

template< class T >  //*
void printArray( const T *array, const int count )//**
{
    for ( int i = 0; i < count; i++ )
        cout << array[ i ] << " ";
    cout << endl;

} // Kraj na function template printArray

void printArray(const int *array, const int count)
{
    for(int i=0; i<count; i++) {
        cout<<array[i]<<" ";
        if((i+1)%4==0)
            cout<<endl;
    }
}

int main()

{

    const int aCount = 5;

    const int bCount = 7;

    const int cCount = 6;

    const int dCount = 9;



    int a[ aCount ] = { 1, 2, 3, 4, 5 };

    double b[ bCount ] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };

    char c[ cCount ] = "HELLO";

    int d[dCount] = {1, 2, 3, 4, 5, 6, 7, 8, 9};





    cout << "Poleto a sodrzi:" << endl;



    // povikaj int function-template specijalizacija

    printArray( a, aCount );  //***





    cout << "Poleto b sodrzi:" << endl;



    // povikaj double function-template specijalizacija

    printArray( b, bCount );  // ***





    cout << "Poleto c sodrzi:" << endl;



    // povikaj char function-template specijalizacija

    printArray( c, cCount );  //***

    cout<<"int pole vo 4 koloni:"<<endl;

    printArray(d, dCount);



    return 0;



} // kraj na main
