#include <iostream>
#include "matrica.h"

using namespace std;

int main()
{
    Matrica matrica1 = Matrica();
    cout << "Matrica 1: " << endl;
    cout<<matrica1;
    Matrica matrica2 = Matrica();
    cout << "Matrica 2: " << endl;
    cout<<matrica2;
    cout<<"Dali matricite se ednakvi: "<<(matrica1 == matrica2)<<endl;
    cout<<"Dali matricite ne se ednakvi: "<<(matrica1 != matrica2)<<endl;
    cout<<"Zbirot na matricite e: "<<matrica1+matrica2<<endl;
    Matrica matrica3 = Matrica();
    cout<<"Vnesi matrijca:"<<endl;
    cin>>matrica3;
    cout<<"Zbir na 2 i 3 matrica e: "<<matrica2+matrica3<<endl;
    int i=2;
    cout<<"Odzemanje so operand1 objekt, operand2 integer: "<<matrica3-i<<endl;
    cout<<"Mnozenje so operand1 integer, operand2 objekt: "<<i*matrica3<<endl;
    return 0;
}
