#include <iostream>
#include "dropki.h"

using namespace std;
using std::cout;
using std::endl;

int main()
{
    Dropki d1(1,3), d2(1,4), d3;
    int i=2;
    d3=d1+d2;
    cout<<"d1+d2: "<<endl;
    Dropki::pecatiFormat(d3.getBroitel(), d3.getImenitel());
    Dropki::pecatiRealenBroj(d3.getBroitel(), d3.getImenitel());
    d3=d1-d2;
    cout<<"d1-d2: "<<endl;
    Dropki::pecatiFormat(d3.getBroitel(), d3.getImenitel());
    Dropki::pecatiRealenBroj(d3.getBroitel(), d3.getImenitel());
    d3=d1*d2;
    cout<<"d1*d2: "<<endl;
    Dropki::pecatiFormat(d3.getBroitel(), d3.getImenitel());
    Dropki::pecatiRealenBroj(d3.getBroitel(), d3.getImenitel());
    d3=d1/d2;
    cout<<"d1/d2: "<<endl;
    Dropki::pecatiFormat(d3.getBroitel(), d3.getImenitel());
    Dropki::pecatiRealenBroj(d3.getBroitel(), d3.getImenitel());
    d3=d1+i;
    cout<<"d1+i: "<<endl;
    Dropki::pecatiFormat(d3.getBroitel(), d3.getImenitel());
    Dropki::pecatiRealenBroj(d3.getBroitel(), d3.getImenitel());
    d3=d1-i;
    cout<<"d1-i: "<<endl;
    Dropki::pecatiFormat(d3.getBroitel(), d3.getImenitel());
    Dropki::pecatiRealenBroj(d3.getBroitel(), d3.getImenitel());
    d3=d1*i;
    cout<<"d1*i: "<<endl;
    Dropki::pecatiFormat(d3.getBroitel(), d3.getImenitel());
    Dropki::pecatiRealenBroj(d3.getBroitel(), d3.getImenitel());
    d3=d1/i;
    cout<<"d1/i: "<<endl;
    Dropki::pecatiFormat(d3.getBroitel(), d3.getImenitel());
    Dropki::pecatiRealenBroj(d3.getBroitel(), d3.getImenitel());
    return 0;
}
