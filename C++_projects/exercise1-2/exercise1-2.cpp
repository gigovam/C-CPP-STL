#include <iostream>

using namespace std;

int tripleCallByValue(int n);
int tripleCallByReference(int &n);

int main()
{
    int number;
    cout << "Vnesi broj:" << endl;
    cin >> number;

    cout<<"Rezultat od tripleCallByValue: "<<tripleCallByValue(number)<<endl;
    cout<<"Vrednosta na number, po tripleCallByValue e: "<<number<<endl;
    cout<<"Rezultat od tripleCallByReference: "<<tripleCallByReference(number)<<endl;
    cout<<"Vrednosta na number, po tripleCallByReference e: "<<number<<endl;
    return 0;
}

int tripleCallByValue(int n) {
    return n*=3;
}

int tripleCallByReference(int &n) {
    return n*=3;
}
