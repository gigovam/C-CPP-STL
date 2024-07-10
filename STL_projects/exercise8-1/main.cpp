#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Vraboten{
friend bool operator<(const Vraboten &v1, const Vraboten &v2);
private:
    static int bod;
    int brojBodovi;
    char *ime;
public:
    Vraboten(){}
    Vraboten(int brojBodovi, char *ime) {
        this->brojBodovi = brojBodovi;
        this->ime = ime;
    }
    int getBrojBodovi() { return brojBodovi; }
    char* getIme() { return ime; }
    int getPlata() { return brojBodovi*Vraboten::bod; }
};

int Vraboten::bod = 10;

bool operator<(const Vraboten &v1, const Vraboten &v2) {
    return v1.brojBodovi < v2.brojBodovi;
}

int main()
{
    vector<Vraboten> vraboteni;
    vraboteni.push_back(Vraboten(20, "vraboten1"));
    vraboteni.push_back(Vraboten(30, "vraboten2"));
    vraboteni.push_back(Vraboten(70, "vraboten3"));
    vraboteni.push_back(Vraboten(100, "vraboten4"));
    vraboteni.push_back(Vraboten(40, "vraboten5"));
    vraboteni.push_back(Vraboten(50, "vraboten6"));
    vraboteni.push_back(Vraboten(10, "vraboten7"));
    vraboteni.push_back(Vraboten(100, "vraboten8"));
    vraboteni.push_back(Vraboten(90, "vraboten9"));
    vraboteni.push_back(Vraboten(60, "vraboten10"));

    sort(vraboteni.begin(), vraboteni.end());

    cout<<"Ime\tPlata"<<endl;
    for(Vraboten v : vraboteni) {
        cout<<v.getIme()<<"\t"<<v.getPlata()<<endl;
    }

    int sum = accumulate(vraboteni.begin(), vraboteni.end(), 0,
            [](int total, Vraboten v) { return total + v.getPlata(); });
    cout<<"Vkupnata suma e: "<<sum<<endl;

    return 0;
}
