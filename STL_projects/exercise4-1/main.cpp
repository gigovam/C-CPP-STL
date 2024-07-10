#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>

class Imenik {
private:
    int telBroj;
    char *ime;
public:
    Imenik(){};
    Imenik(int telBroj, char *ime);
    char* getIme();
    bool operator<(const Imenik &i) const;
};

Imenik::Imenik(int telBroj, char *ime) {
    this->telBroj = telBroj;
    this->ime = ime;
}

char* Imenik::getIme() { return ime; }

bool Imenik::operator<(const Imenik &i) const {
    return strcmp(this->ime, i.ime) < 0;
}

using namespace std;

int main()
{
    vector<Imenik> imenik;
    imenik.push_back(Imenik(123, "marija"));
    imenik.push_back(Imenik(456, "damjan"));
    imenik.push_back(Imenik(789, "angela"));

    sort(imenik.begin(), imenik.end());

    vector<Imenik>::iterator i;

    for ( i = imenik.begin(); i != imenik.end(); ++i )
        cout << i->getIme() << "\n";

    return 0;
}
