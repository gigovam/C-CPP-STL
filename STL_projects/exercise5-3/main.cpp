#include <iostream>
#include <vector>
#include <deque>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    deque<int> intDeque;
    intDeque.push_back(1);
    intDeque.push_back(2);
    intDeque.push_back(3);
    intDeque.push_back(4);
    intDeque.push_back(5);

    vector<int> intVector;
    deque<int>::const_iterator iterator = intDeque.end()-1;
    while(iterator != intDeque.begin()) {
        intVector.push_back(*iterator);
        iterator--;
    }
    intVector.push_back(*iterator);

    std::ostream_iterator<int> output(cout, " ");
    std::copy(intVector.begin(), intVector.end(), output);
    return 0;
}
