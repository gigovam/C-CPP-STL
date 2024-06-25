#include "dropki.h"
#include "dropki.h"
#include <iostream>

using std::cout;
using std::endl;

Dropki::Dropki(int a, int b) {
    broitel = a;
    imenitel = (b != 0) ? b : 1;
}

void Dropki::pecatiFormat(int a, int b) {
    cout<<"Dropkata e: "<<a<<"/"<<b<<endl;
}

void Dropki::pecatiRealenBroj(int a, int b) {
    cout<<"Decimalnata vrednost na dropkata e: "<<(float)a/b<<endl;
}

int Dropki::nzd(int a, int b) {
    int min=a, nzd=1 ,i;
    if(min > b) min = b;
    for(i=1; i<=min; i++) {
        if(a%i==0 && b%i==0) {
            nzd = i;
        }
    }
    return nzd;
}

int Dropki::nzs(int a, int b) {
    int nzs = nzd(a, b);
    return abs(a * b) / nzs;
}

Dropki Dropki::operator*(Dropki d2) {
    Dropki temp;
    int delitel;
    temp.broitel = broitel*d2.broitel;
    temp.imenitel = imenitel*d2.imenitel;
    delitel = nzd(temp.broitel, temp.imenitel);
    temp.broitel/=delitel;
    temp.imenitel/=delitel;
    return temp;
}

Dropki Dropki::operator/(Dropki d2) {
    Dropki temp;
    int delitel;
    temp.broitel = broitel*d2.imenitel;
    temp.imenitel = imenitel*d2.broitel;
    delitel = nzd(temp.broitel, temp.imenitel);
    temp.broitel/=delitel;
    temp.imenitel/=delitel;
    return temp;
}

Dropki Dropki::operator+(Dropki d2) {
    Dropki temp;
    int nzsBroj, mnozitel1, mnozitel2, delitel;
    if(imenitel == d2.imenitel) {
        temp.broitel = broitel + d2.broitel;
        temp.imenitel = imenitel;
    }
    else {
        nzsBroj = nzs(imenitel, d2.imenitel);
        mnozitel1 = nzsBroj/imenitel;
        mnozitel2 = nzsBroj/d2.imenitel;
        broitel*=mnozitel1;
        imenitel*=mnozitel1;
        d2.broitel*=mnozitel2;
        d2.imenitel*=mnozitel2;
        temp.broitel = broitel + d2.broitel;
        temp.imenitel = imenitel;
    }
    delitel = nzd(temp.broitel, temp.imenitel);
    temp.broitel/=delitel;
    temp.imenitel/=delitel;
    return temp;
}

Dropki Dropki::operator-(Dropki d2) {
    Dropki temp;
    int nzsBroj, mnozitel1, mnozitel2, delitel;
    if(imenitel == d2.imenitel) {
        temp.broitel = abs(broitel - d2.broitel);
        temp.imenitel = imenitel;
    }
    else {
        nzsBroj = nzs(imenitel, d2.imenitel);
        mnozitel1 = nzsBroj/imenitel;
        mnozitel2 = nzsBroj/d2.imenitel;
        broitel*=mnozitel1;
        imenitel*=mnozitel1;
        d2.broitel*=mnozitel2;
        d2.imenitel*=mnozitel2;
        temp.broitel = abs(broitel - d2.broitel);
        temp.imenitel = imenitel;
    }
    delitel = nzd(temp.broitel, temp.imenitel);
    temp.broitel/=delitel;
    temp.imenitel/=delitel;
    return temp;
}

Dropki Dropki::operator*(int i) {
    Dropki temp;
    int delitel;
    temp.broitel = broitel*i;
    temp.imenitel = imenitel;
    delitel = nzd(temp.broitel, temp.imenitel);
    temp.broitel/=delitel;
    temp.imenitel/=delitel;
    return temp;
}

Dropki Dropki::operator/(int i) {
    Dropki temp;
    int delitel;
    temp.broitel = broitel;
    temp.imenitel = imenitel*i;
    delitel = nzd(temp.broitel, temp.imenitel);
    temp.broitel/=delitel;
    temp.imenitel/=delitel;
    return temp;
}

Dropki Dropki::operator+(int i) {
    Dropki temp;
    int iImenitel = 1;
    int nzsBroj, mnozitel1, mnozitel2, delitel;
    if(imenitel == iImenitel) {
        temp.broitel = broitel + i;
        temp.imenitel = imenitel;
    }
    else {
        nzsBroj = nzs(imenitel, iImenitel);
        mnozitel1 = nzsBroj/imenitel;
        mnozitel2 = nzsBroj/iImenitel;
        broitel*=mnozitel1;
        imenitel*=mnozitel1;
        i*=mnozitel2;
        iImenitel*=mnozitel2;
        temp.broitel = broitel + i;
        temp.imenitel = imenitel;
    }
    delitel = nzd(temp.broitel, temp.imenitel);
    temp.broitel/=delitel;
    temp.imenitel/=delitel;
    return temp;
}

Dropki Dropki::operator-(int i) {
    Dropki temp;
    int iImenitel = 1;
    int nzsBroj, mnozitel1, mnozitel2, delitel;
    if(imenitel == iImenitel) {
        temp.broitel = abs(broitel - i);
        temp.imenitel = imenitel;
    }
    else {
        nzsBroj = nzs(imenitel, iImenitel);
        mnozitel1 = nzsBroj/imenitel;
        mnozitel2 = nzsBroj/iImenitel;
        broitel*=mnozitel1;
        imenitel*=mnozitel1;
        i*=mnozitel2;
        iImenitel*=mnozitel2;
        temp.broitel = abs(broitel - i);
        temp.imenitel = imenitel;
    }
    delitel = nzd(temp.broitel, temp.imenitel);
    temp.broitel/=delitel;
    temp.imenitel/=delitel;
    return temp;
}

int Dropki::getBroitel() {
    return broitel;
}

int Dropki::getImenitel() {
    return imenitel;
}
