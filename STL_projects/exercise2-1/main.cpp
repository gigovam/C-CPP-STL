#include <iostream>
using namespace std;

template<class T> T sum(T* array, int start, int end, T init = T()) {
    for(int i=start; i<=end; i++) {
        init += array[i];
    }
    return init;
}

int main() {
    float a[] = { 1.5, 2, 3, 4, 5, 6};
    cout << sum(a, 0, 4) << endl;
}
