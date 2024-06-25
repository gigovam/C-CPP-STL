/* Program p09_14.c
   Program za delenje karti */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* prototipovi */
void meshaj( int wDeck[][ 13 ] );
void deli( const int wDeck[][ 13 ], int wFace[],
          const char *wSuit[] );
int poker(const char *boja[], int brojka[]);

int main()
{
    /* inicijaliziraj ja nizata na boi */
    const char *boja[ 4 ] = { "Srce", "Karo", "List", "Detelina" };

    /* inicijaliziraj ja nizata na brojki */
    int brojka[ 13 ] =
        { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14 };

    /* inicijaliziraj niza na spil */
    int spil[ 4 ][ 13 ] = { 0 };

    srand( time( 0 ) ); /* generator na sluchajni broevi */

    meshaj( spil );
    deli( spil, brojka, boja );

    return 0; /* uspeshen kraj */

} /* kraj main */

/* meshaj gi kartite vo shpilot */
void meshaj( int wDeck[][ 13 ] )
{
    int row;    /* broj na red */
    int column; /* broj na kolona */
    int card;   /* brojach */

    /* za sekoja od 52-te karti,
   odberi sluchajno mesto vo shpilot */
    for ( card = 1; card <= 52; card++ ) {

        /* biraj nova sluchajna lokacija dodeka ne najdesh
      slobodno mesto */
        do {
            row = rand() % 4;
            column = rand() % 13;
        } while( wDeck[ row ][ column ] != 0 ); /* kraj do...while */

        /* pojtavi ja kartata na izbranoto mesto vo spilot */
        wDeck[ row ][ column ] = card;
    } /* kraj for */
} /* kraj na funkcijata meshaj */

/* deli gi kartite vo shpilot */
void deli( const int wDeck[][ 13 ], int wFace[],
          const char *wSuit[] )
{
    int card;   /* brojach na karti */
    int row;    /* brojach na redovi */
    int column; /* brojach na koloni */

    const char *boja[5];
    int brojka[5];

    int poeniPrvIgrac;
    int poeniVtorIgrac;

    for(int igrac=0; igrac<=1; igrac++) {
        printf("Karti na igrach %d:\n", igrac+1);
    /* podeli ja sekoja od 52-te karti */
        int podeleniKarti = 0;
    for (card = 1 + igrac * 5; card <= 5 + igrac * 5; card++) {

        /* pomini niz redovite na wDeck */
        for ( row = 0; row <= 3; row++ ) {

            /* pomini niz kolonite na wDeck za tekovniot red */
            for ( column = 0; column <= 12; column++ ) {

                /* ako mestoto ja sodrzhi tekovnata karta, prikazhi ja kartata */
                if ( wDeck[ row ][ column ] == card ) {
                    printf( "%8d %-8s\n", wFace[ column ], wSuit[ row ]);
                    boja[podeleniKarti] = wSuit[row];
                    brojka[podeleniKarti] = wFace[column];
                    podeleniKarti++;
                } /* kraj if */
            } /* kraj for */
        } /* kraj for */
    } /* kraj for */
        if(igrac==0)
            poeniPrvIgrac = poker(boja, brojka);
        else
            poeniVtorIgrac = poker(boja, brojka);
    }

    if(poeniPrvIgrac>poeniVtorIgrac)
        printf("Prviot igrach pobedil so %d : %d", poeniPrvIgrac, poeniVtorIgrac);
    else if(poeniPrvIgrac<poeniVtorIgrac)
        printf("Vtoriot igrach pobedil so %d : %d", poeniVtorIgrac, poeniPrvIgrac);
    else
        printf("Neresheno %d : %d.", poeniPrvIgrac, poeniVtorIgrac);
} /* kraj na funkcijata deli */

int poker(const char *boja[], int brojka[]) {
    int sum=0;
    int kenta=1;
    int istaBoja=1;
    int istiBrojki=0;
    int parovi=0;
    int poeni=0;
    for(int i=0; i<4; i++) {
        if(abs(brojka[i]-brojka[i+1]) != 1) {
            kenta=0;
        }
        if(boja[i]!=boja[i+1]) {
            istaBoja=0;
        }
    }

    for(int i=0; i<4; i++) {
        for(int j=i+1; j<5; j++) {
            if(brojka[i]==brojka[j]) {
                parovi++;
            }
            if(brojka[i]==brojka[j]) {
                istiBrojki++;
            }
        }
    }

    if(kenta) {
        //printf("Pet podredeni karti od ista boja.");
        poeni=6;
        return poeni;
    }
    else if(istaBoja) {
        //printf("Site pet karti se od ista boja.");
        poeni=5;
        return poeni;
    }
    else if(istiBrojki==4) {
        //printf("Cetiri karti se so ista brojka.");
        poeni=4;
        return poeni;
    }
    else if(istiBrojki==3) {
        //printf("Tri karti se so ista brojka.");
        poeni=3;
        return poeni;
    }
    else if(parovi==2) {
        //printf("Ima dva para karti so ista brojka.");
        poeni=2;
        return poeni;
    }
    else if(parovi==1) {
        //printf("Ima eden par karti so ista brojka");
        poeni=1;
        return poeni;
    }
    else
        //printf("Izgubi.");
    return poeni;
}













