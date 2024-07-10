#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    vector<char> vec1 = {'g', 'i', 'g', 'o', 'v', 'a'};
    vector<char> vec2 = {'m', 'a', 'r', 'i', 'j', 'a'};
    vector<char> vec3 = {'s', 't', 'a', 'k', 'l', 'o'};
    vector<char> vec4 = {'s', 'l', 'a', 't', 'k', 'o'};
    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());
    sort(vec3.begin(), vec3.end());
    sort(vec4.begin(), vec4.end());
    if(std::equal(vec1.begin(), vec1.end(), vec2.begin()))
        cout<<"Vec1 i vec2 se anagrami"<<endl;
    else
        cout<<"Vec1 i vec2 ne se anagram"<<endl;
    if(std::equal(vec3.begin(), vec3.end(), vec4.begin()))
        cout<<"Vec3 i vec4 se anagrami"<<endl;
    else
        cout<<"Vec3 i vec4 ne se anagram"<<endl;
    return 0;
}
