#include <iostream>
#include "stedac.h"

using namespace std;
using std::cout;
using std::endl;


int main()
{
    Stedac *s1 = new Stedac(10000 , 1000, "marija", "gigova", "partizanska", 070123456);
    cout<<"Broj na stedaci po kreiran 1 stedach, so povik od objekt:"<<endl;
    cout<<s1->getBrojStedaci()<<endl;
    cout<<"Kamata za prv shtedach"<<s1->getKamata()<<endl;
    Stedac *s2 = new Stedac(10000 , 1000, "a", "b", "partizanska", 070123456);
    cout<<"Broj na stedaci po kreiran 2 stedach, so povik od klasa:"<<endl;
    cout<<Stedac::getBrojStedaci()<<endl;
    cout<<"Kamata za vtor shtedach"<<s1->getKamata()<<endl;
    return 0;
}
