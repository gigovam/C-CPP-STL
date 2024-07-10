#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    list<string> list1, list2, list3;
    list1.push_back("email1@gmail.com");
    list1.push_back("email2@gmail.com");
    list2.push_back("email3@gmail.com");
    list2.push_back("email2@gmail.com");
    list3.push_back("email4@gmail.com");
    list3.push_back("email1@gmail.com");

    list1.splice(list1.end(), list2);
    list1.splice(list1.end(), list3);
    list1.sort();
    list1.unique();

    std::ostream_iterator<string> output(cout, "\n");
    std::copy(list1.begin(), list1.end(), output);
    return 0;
}
