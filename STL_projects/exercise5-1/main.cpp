#include <iostream>
#include <vector>

using namespace std;

template <class T>
bool palindrom(const vector<T> &vec) {
    typename vector<T>::const_iterator it1 = vec.begin();
    typename vector<T>::const_iterator it2 = vec.end()-1;
    while(it1 != it2) {
        if(*it1 != *it2) {
            return false;
        }
        it1++;
        it2--;
    }
    return true;
}

int main()
{
    vector<int> intVector1 = {1, 2, 3, 4, 5};
    vector<int> intVector2 = {1, 2, 3, 2, 1};
    vector<char> charVector1 = {'a', 'b', 'c', 'd', 'e'};
    vector<char> charVector2 = {'a', 'b', 'c', 'b', 'a'};
    if(palindrom(intVector1)) {
        cout<<"Vektor 1 e palindrom."<<endl;
    }
    if(palindrom(intVector2)) {
        cout<<"Vektor 2 e palindrom."<<endl;
    }
    if(palindrom(charVector1)) {
        cout<<"Vektor 3 e palindrom."<<endl;
    }
    if(palindrom(charVector2)) {
        cout<<"Vektor 4 e palindrom."<<endl;
    }
    return 0;
}
