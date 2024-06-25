/* Program p09_13.c
   Kopiranje na string koristejki notacija na niza i
   pokazhuvachka notacija. */
#include <stdio.h>

void copy1( char *s1, const char *s2 ); /* prototip */
void copy2( char *s1, const char *s2 ); /* prototip */

int main()
{
    char string1[ 10 ];          /* kreiraj niza string1 */
    char *string2 = "Zdravo";     /* kreiraj pokazhuvach kon string */
    char string3[ 10 ];          /* kreiraj niza string3 */
    char string4[] = "Dobar den"; /* kreiraj pokazhuvach kon string */

    copy1( string1, string2 );
    printf( "string1 = %s\n", string1 );

    copy2( string3, string4 );
    printf( "string3 = %s\n", string3 );

    return 0; /* uspeshen kraj */

} /* kraj main */

/* kopiraj go s2 vo s1 koristejki notacija na niza */
void copy1( char *s1, const char *s2 )
{
    int i; /* brojach */
    /* pomini niz stringovite */
    for ( i = 0; ( s1[ i ] = s2[ i ] ) != '\0'; i++ ) {
        ;   /* vo teloto nishto ne se pravi */
    } /* kraj for */
} /* kraj na funkcijata copy1 */

/* kopiraj go s2 vo s1 koristejki pokazhuvachka notacija */
void copy2( char *s1, const char *s2 )
{
    /* pomini niz stringovite */
    for ( ; ( *s1 = *s2 ) != '\0'; s1++, s2++ ) {
        ;   /* nishto ne se pravi vo teloto na for */
    } /* kraj for */
} /* kraj na funkcijata copy2 */


/* Prashanje 1: Prviot argument mora da ima pogolema ili ednakva dolzhina so vtoriot,
 * zatoa shto vtorata niza se kopira na memoriskata lokcija na prvata. Ako prvata e pomala,
 * nema da ima prostor da se smestat site elementi.*/

/* Prashanje 2: Vtoriot argument vo dvete funkcii e deklariran kako const char *
 * bidejki taa niza ne smee da bide promeneta, tie vrednosti se kopiraat vo prvata
 * (chijashto promena treba da bide dozvolena).*/


