#ifndef DROPKI_H
#define DROPKI_H

class Dropki
{
public:
    Dropki(int broitel = 1, int imenitel = 1);
    void set(int, int);
    static void soberi(Dropki , Dropki);
    static void odzemi(Dropki, Dropki);
    static void mnozhi(Dropki, Dropki);
    static void deli(Dropki, Dropki);
    static void pecatiFormat(int a, int b);
    static void pecatiRealenBroj(int a, int b);
    static int nzs(int a, int b);
    static int nzd(int a, int b);

private:
    int broitel;
    int imenitel;
};

#endif // DROPKI_H
