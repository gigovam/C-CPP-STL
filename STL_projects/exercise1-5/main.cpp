#include <iostream>

using namespace std;

template <class T>
class Array{
private:
    T *array;
    int size;
public:
    Array(int size);
    void set(T element, int pos);
    T get(int pos);
    ~Array() {   delete [] array; }
};

template <class T>
Array<T>::Array(int size) {
    this->size = size;
    array = new T[size];
}

template <class T>
void Array<T>::set(T element, int pos) {
    array[pos] = element;
}

template <class T>
T Array<T>::get(int pos) {
    return array[pos];
}

int main()
{
    Array<int> intArray(3);
    Array<double> doubleArray(3);
    intArray.set(3, 0);
    intArray.set(2, 1);
    intArray.set(1, 2);

    doubleArray.set(1.1, 0);
    doubleArray.set(2.2, 1);
    doubleArray.set(3.3, 2);

    cout<<intArray.get(0)<<endl;
    cout<<intArray.get(1)<<endl;
    cout<<intArray.get(2)<<endl;
    cout<<endl;
    cout<<doubleArray.get(0)<<endl;
    cout<<doubleArray.get(1)<<endl;
    cout<<doubleArray.get(2)<<endl;
}
