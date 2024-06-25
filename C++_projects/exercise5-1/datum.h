#ifndef DATUM_H
#define DATUM_H

class Datum
{
public:
    Datum();
    Datum(int , int , int);
    void setDatum(int d, int m, int g);
    void get() const;
    int getDen() const;
    int getMesec() const;
    int getGodina() const;
private:
    int den;
    int mesec;
    int godina;
};

#endif // DATUM_H
