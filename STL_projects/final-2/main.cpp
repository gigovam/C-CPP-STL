#include <iostream>
#include <vector>
#include <fstream>
#include <cstring>
#include <numeric>
#include <iomanip>
#include <algorithm>

using namespace std;

class Inventar{
private:
    int id;
    int quantity;
    double price;
public:
    Inventar(int i, int q, double p) {
        id = i;
        quantity = q;
        price = p;
    }
    double getPrice() { return price; }
    int getQuantity() { return quantity; }
    int getId() { return id; }
};

double operator+(double n, Inventar i) {
    return n+i.getPrice();
}

int main()
{
    vector<Inventar> artikli;
    ifstream inputStream("C:/Users/Maksim/Desktop/inventar.txt", ios::in);
    try{
        if(!inputStream)
        throw exception();
    }
    catch(exception &e) {
        cout<<"An exception occured while opening inventar.txt"<<endl;
    }
    char buffer[10];
    int id, quantity;
    double price;
    while(inputStream >> id >> quantity >> price) {
        artikli.push_back(Inventar(id, quantity, price));
    }
    inputStream.close();
    cout<<"Vkupnata cena na artiklite e: "<<(double)accumulate(artikli.begin(), artikli.end(), 0)<<endl;

    cout<<"ID\tQuantity\tPrice"<<endl;
    for(Inventar i : artikli) {
        if(i.getQuantity() < 10) {
            cout<<left<<setw(8)<<i.getId()<<setw(8)<<i.getQuantity()<<"\t"<<setw(8)<<i.getPrice()<<endl;
        }
    }

    return 0;
}
