#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int n, m, i;
    cout << "Vnesi n: " << endl; cin>>n;
    cout<<"Vnesi shirina na koloni: "<<endl; cin>>m;
    for(int i=1; i<=n; i++) {
        cout<<left<<setw(m)<<i<<setw(m)<<i*i<<
            setw(m)<<setprecision( 2 )<<sqrt(i)<<
            setw(m)<<setprecision( 2 )<<cbrt(i)<<endl;
    }
    return 0;
}
