#include <iostream>

using namespace std;

template<typename R, typename P>

P implicit_cast(const R& p) {

    return p;

}



int main() {

    int i = 1;

    float x = implicit_cast<float>(i);

    int j = implicit_cast<int>(x);



} //kraj na main

// Kodot ne se kompajlira poradi toa shto prviot povik na funkcijata treba da e <float,int>
// no so zamena na P i R se povikuva so <int, float> i vrakja int namesto float.
// Istoto se sluchuva i so vtoriot povika kade namesto <int, float> se povikuva so <float, int>
// i namesto int vrakja float.
