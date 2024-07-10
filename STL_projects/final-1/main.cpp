#include <iostream>

using namespace std;

template <class T>
class Pole{
private:
    T array[5];
public:
    Pole(T arr[5]) {
        for(int i=0; i<5; i++) {
            array[i] = arr[i];
        }
    }
    void max();
};

template <class T>
void Pole<T>::max() {
    T maxElement = array[0];
    for(int i=0; i<5; i++) {
        if(array[i] > maxElement) {
            maxElement = array[i];
        }
    }
    cout<<"Maksimalen element e: "<<maxElement<<endl;
}

int main()
{
    int intArray[5] = {1, 2, 3, 4, 5};
    char charArray[5] = {'a', 'b', 'c', 'd', 'e'};
    string stringArray[5] = {"string1", "string2", "string3", "string4", "string5"};
    Pole<int> intPole(intArray);
    Pole<char> charPole(charArray);
    Pole<string> stringPole(stringArray);
    intPole.max();
    charPole.max();
    stringPole.max();
    return 0;
}
