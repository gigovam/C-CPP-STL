#include "dropki.h"
#include <iostream>

using std::cout;
using std::endl;

Dropki::Dropki(int a, int b) {
    set(a, b);
}

void Dropki::set(int a, int b) {
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

void Dropki::mnozhi(Dropki a, Dropki b) {
    int broitel, imenitel, delitel;
    broitel = a.broitel*b.broitel;
    imenitel = a.imenitel*b.imenitel;
    delitel = nzd(broitel, imenitel);
    pecatiFormat(broitel/delitel, imenitel/delitel);
    pecatiRealenBroj(broitel/delitel, imenitel/delitel);
}

void Dropki::deli(Dropki a, Dropki b) {
    int broitel, imenitel, delitel;
    broitel = a.broitel*b.imenitel;
    imenitel = a.imenitel*b.broitel;
    delitel = nzd(broitel, imenitel);
    pecatiFormat(broitel/delitel, imenitel/delitel);
    pecatiRealenBroj(broitel/delitel, imenitel/delitel);
}

void Dropki::soberi(Dropki a, Dropki b) {
    int im=1, br=1, nzsBroj, mnozitel1, mnozitel2, delitel;
    if(a.imenitel == b.imenitel) {
        br = a.broitel+b.broitel;
        im = a.imenitel;
    }
    else {
        nzsBroj = nzs(a.imenitel, b.imenitel);
        mnozitel1 = nzsBroj/a.imenitel;
        mnozitel2 = nzsBroj/b.imenitel;
        br = a.broitel*mnozitel1 + b.broitel*mnozitel2;
        im = a.imenitel*mnozitel1;
    }
    delitel = nzd(br, im);
    pecatiFormat(br/delitel ,im/delitel);
    pecatiRealenBroj(br/delitel, im/delitel);
}

void Dropki::odzemi(Dropki a, Dropki b) {
    int im=1, br=1, nzsBroj, mnozitel1, mnozitel2, delitel;
    if(a.imenitel == b.imenitel) {
        br = abs(a.broitel-b.broitel);
        im = a.imenitel;
    }
    else {
        nzsBroj = nzs(a.imenitel, b.imenitel);
        mnozitel1 = nzsBroj/a.imenitel;
        mnozitel2 = nzsBroj/b.imenitel;
        br = abs(a.broitel*mnozitel1 - b.broitel*mnozitel2);
        im = a.imenitel*mnozitel1;
    }
    delitel = nzd(br, im);
    pecatiFormat(br/delitel ,im/delitel);
    pecatiRealenBroj(br/delitel, im/delitel);
}

