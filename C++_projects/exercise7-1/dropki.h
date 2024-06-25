#ifndef DROPKI_H
#define DROPKI_H

class Dropki
{
public:
    Dropki(int a=1, int b=1);
    Dropki operator+(Dropki);
    Dropki operator-(Dropki);
    Dropki operator*(Dropki);
    Dropki operator/(Dropki);
    Dropki operator+(int);
    Dropki operator-(int);
    Dropki operator*(int);
    Dropki operator/(int);
    static void pecatiFormat(int a, int b);
    static void pecatiRealenBroj(int a, int b);
    static int nzs(int a, int b);
    static int nzd(int a, int b);
    int getBroitel();
    int getImenitel();

private:
    int broitel;
    int imenitel;
};

#endif // DROPKI_H
