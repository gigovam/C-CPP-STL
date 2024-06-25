#ifndef DATUM_H
#define DATUM_H

class Datum
{
private:
    int den;
    int mesec;
    int godina;
public:
    Datum();
    Datum(int, int, int);
    void printDatum();
    int getMesec();
    int getDen();
    int getGodina();
};

#endif // DATUM_H
