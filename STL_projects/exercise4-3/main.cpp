#include <iostream>
#include <string.h>
#include <set>

using namespace std;

int main()
{
    char line[30];
    cin.getline(line, 30);
    set<string> set;

    char* token = strtok(line, " ");
    while (token != nullptr) {
        set.insert(string(token));
        token = strtok(nullptr, " ");
    }

    for (const string& s : set) {
        cout << s << endl;
    }

    return 0;
}
