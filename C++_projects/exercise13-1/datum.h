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
    int getDen();
    int getMesec();
    int getGodina();
    void printDatum();
};

#endif // DATUM_H
