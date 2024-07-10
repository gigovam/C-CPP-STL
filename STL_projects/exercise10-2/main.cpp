#include <iostream>
#include <exception>

using namespace std;

class Motor{
public:
    Motor() {}
};

class Avtomobil{
private:
    Motor *motor;
public:
    Avtomobil(){
        this->motor = new Motor();
    }
};

class Garaza{
private:
    Avtomobil *avtomobil;
public:
    Garaza() {
        try{
            this->avtomobil = new Avtomobil();
            throw Motor();
        }
        catch(Motor &m){
            cout<<"Faten iskluchok vo konstruktorot na Garazha"<<endl;
            throw m;
        }
    }
};

int main()
{
    try{
        Garaza *g = new Garaza();
    }
    catch(Motor &m) {
        cout<<"Iskluchok vo main";
    }
    return 0;
}
