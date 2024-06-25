#include <iostream>

using namespace std;

inline float circleArea(int r) { return r*r*3.14; }

int main()
{
    int radius;
    float p;
    cout << "Vnesi radius na krug:"<< endl;
    cin >> radius;
    cout << "PLoshtinata na krugot e: " << circleArea(radius) <<endl;
    return 0;
}
