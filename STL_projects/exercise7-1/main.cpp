#include <iostream>
#include <list>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
    list<int> l;
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    for(int i=0; i<10000; i++) {
        l.push_back(std::rand() % (10000));
    }

    list<int>::const_iterator i;
    int counter=0;
    for(i = l.begin(); i!=l.end(); i++) {
        if(*i %2 == 0)
            counter++;
    }
    cout<<"Brojot na parni elementi e: "<<counter<<endl;
    counter=0;
    for(i = l.begin(); i!=l.end(); i++) {
        if(*i < 2000)
            counter++;
    }
    cout<<"Brojot na elementi pomali od 2000: "<<counter<<endl;
    counter=0;
    for(i = l.begin(); i!=l.end(); i++) {
        if(*i >= 2000 && *i < 4000)
            counter++;
    }
    cout<<"Brojot na elementi vo interval [2000, 4000): "<<counter<<endl;
    counter=0;
    for(i = l.begin(); i!=l.end(); i++) {
        if(*i >= 4000 && *i < 6000 )
            counter++;
    }
    cout<<"Brojot na elementi vo interval [4000, 6000): "<<counter<<endl;
    counter=0;
    for(i = l.begin(); i!=l.end(); i++) {
        if(*i >= 6000 && *i < 8000 )
            counter++;
    }
    cout<<"Brojot na elementi vo interval [6000, 8000): "<<counter<<endl;
    counter=0;
    for(i = l.begin(); i!=l.end(); i++) {
        if(*i >= 8000 && *i < 10000 )
            counter++;
    }
    cout<<"Brojot na elementi vo interval [8000, 10000): "<<counter<<endl;
    counter=0;
    for(i = l.begin(); i!=l.end(); i++) {
        counter+=*i;
    }
    cout<<"Sredna vrednost na elementite: "<<counter/10000<<endl;
    return 0;
}
