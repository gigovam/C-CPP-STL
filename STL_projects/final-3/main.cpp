#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

class Pravoagolnik {
    friend bool operator==(const Pravoagolnik &p1, const Pravoagolnik &p2);
    friend ostream& operator<<(ostream &os, const Pravoagolnik &p);
    friend bool operator<(const Pravoagolnik &p1, const Pravoagolnik &p2);
private:
    double a, b;
public:
    Pravoagolnik(double a, double b) : a(a), b(b) {}
};

bool operator==(const Pravoagolnik &p1, const Pravoagolnik &p2) {
    return p1.a == p2.a && p1.b == p2.b;
}

ostream& operator<<(ostream &os, const Pravoagolnik &p) {
    os << p.a << " " << p.b;
    return os;
}

bool operator<(const Pravoagolnik &p1, const Pravoagolnik &p2) {
    return p1.a * p1.b < p2.a * p2.b;
}

class Kvadrat {
    friend bool operator==(const Kvadrat &k1, const Kvadrat &k2);
    friend ostream& operator<<(ostream &os, const Kvadrat &k);
    friend bool operator<(const Kvadrat &k1, const Kvadrat &k2);
private:
    double a;
public:
    Kvadrat(double a) : a(a) {}
};

bool operator==(const Kvadrat &k1, const Kvadrat &k2) {
    return k1.a == k2.a;
}

ostream& operator<<(ostream &os, const Kvadrat &k) {
    os << k.a;
    return os;
}

bool operator<(const Kvadrat &k1, const Kvadrat &k2) {
    return k1.a < k2.a;
}

int main() {
    vector<Pravoagolnik> pravoagolnici;
    vector<Kvadrat> kvadrati;
    vector<Pravoagolnik> uniquePravoagolnici;
    vector<Kvadrat> uniqueKvadrati;
    vector<Pravoagolnik> duplicatePravoagolnici;
    vector<Kvadrat> duplicateKvadrati;

    ifstream inputStream("C:/Users/Maksim/Desktop/oblici.txt", ios::in);
    if (!inputStream) {
        cout << "The file failed to open." << endl;
        return 1;
    }
    int shapeType;
    while (inputStream >> shapeType) {
        try {
            if (shapeType == 1) {
                double a, b;
                inputStream >> a >> b;
                pravoagolnici.push_back(Pravoagolnik(a, b));
            } else if (shapeType == 2) {
                double a;
                inputStream >> a;
                kvadrati.push_back(Kvadrat(a));
            } else {
                throw invalid_argument("Invalid shape type.");
            }
        } catch (exception &e) {
            cout << "Exception: " << e.what() << endl;
        }
    }
    inputStream.close();


    sort(pravoagolnici.begin(), pravoagolnici.end());
    for (size_t i = 1; i < pravoagolnici.size(); ++i) {
        if (pravoagolnici[i] == pravoagolnici[i - 1]) {
            duplicatePravoagolnici.push_back(pravoagolnici[i]);
        }
    }
    unique_copy(pravoagolnici.begin(), pravoagolnici.end(), back_inserter(uniquePravoagolnici));


    sort(kvadrati.begin(), kvadrati.end());
    for (size_t i = 1; i < kvadrati.size(); ++i) {
        if (kvadrati[i] == kvadrati[i - 1]) {
            duplicateKvadrati.push_back(kvadrati[i]);
        }
    }
    unique_copy(kvadrati.begin(), kvadrati.end(), back_inserter(uniqueKvadrati));


    ostream_iterator<Pravoagolnik> outputPravoagolnik(cout, "\n");
    ostream_iterator<Kvadrat> outputKvadrat(cout, "\n");

    cout << "Unija na pravoagolnici: " << endl;
    copy(uniquePravoagolnici.begin(), uniquePravoagolnici.end(), outputPravoagolnik);
    cout << endl << "Presek na pravoagolnici: " << endl;
    copy(duplicatePravoagolnici.begin(), duplicatePravoagolnici.end(), outputPravoagolnik);

    cout << endl << "Unija na kvadrati: " << endl;
    copy(uniqueKvadrati.begin(), uniqueKvadrati.end(), outputKvadrat);
    cout << endl << "Presek na kvadrati: " << endl;
    copy(duplicateKvadrati.begin(), duplicateKvadrati.end(), outputKvadrat);

    return 0;
}
