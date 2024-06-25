#include <stdio.h>
#include <string.h>

typedef struct {
    int ID;
    char ime[20];
    char prezime[20];
    int pol;
    int vozrast;
    int brachnaSostojba;
    int kredibilnost;
    char adresa[30];
    double tekovnaPlata;
    double minataPlata;
} Vraboten;

void koregirajKredibilnost(Vraboten niza[], int n);
void sortKred(Vraboten niza[], int n);
void sortTekovnaPlata(Vraboten niza[], int n);
void sortMinataPlata(Vraboten niza[], int n);
void koregirajVraboten(Vraboten niza[], int n, int ID, char *ime, char *prezime, int pol, int vozrast, int brachnaSostojba, int kredibilnost, char *adresa, double tekovnaPlata, double minataPlata);
void swap(Vraboten *vraboten1, Vraboten *vraboten2 );

int main()
{
    void (*f[3])(Vraboten[], int) = {sortKred, sortTekovnaPlata, sortMinataPlata};
    int n, izbor;
    printf("Vnesi broj na vraboteni, maksimum 50:\n");
    scanf("%d", &n);
    Vraboten niza[n];
    printf("Vnesi podatoci: \n");
    for(int i=0; i<n; i++) {
        printf("Vnesi ID: \n");
        scanf("%d", &niza[i].ID);
        printf("Vnesi ime: \n");
        scanf("%s", &niza[i].ime);
        printf("Vnesi prezime: \n");
        scanf("%s", &niza[i].prezime);
        printf("Vnesi pol: \n");
        scanf("%d", &niza[i].pol);
        printf("Vnesi vozrast: \n");
        scanf("%d", &niza[i].vozrast);
        printf("Vnesi brachna sostojba: \n");
        scanf("%d", &niza[i].brachnaSostojba);
        printf("Vnesi kredibilnost: \n");
        scanf("%d", &niza[i].kredibilnost);
        printf("Vnesi adresa: \n");
        scanf("%s", &niza[i].adresa);
        printf("Vnesi tekovna plata: \n");
        scanf("%f", &niza[i].tekovnaPlata);
        printf("Vnesi minata plata: \n");
        scanf("%f", &niza[i].minataPlata);
        printf("\n");
    }

    printf("Odberi nachin na sortiranje. Vnesi 0 za sortiranje po kredibilnost, 1 za sortiranje"
           "po tekovna plata i 2 za sortiranje po minata plata:\n");
    scanf("%d", &izbor);
    if(izbor == 0)
        (*f[izbor])(niza, n);
    else if(izbor == 1)
        (*f[izbor])(niza, n);
    else if(izbor == 2)
        (*f[izbor])(niza, n);

    koregirajKredibilnost(niza, n);

    koregirajVraboten(niza, n, 1, "ime", "prezime", 1, 20, 1, 60, "adresa", 20000, 15000);

    for(int i=0; i<n; i++) {
        printf("ID: %d\n", niza[i].ID);
        printf("Ime: %s\n", niza[i].ime);
        printf("Prezime: %s\n", niza[i].prezime);
        printf("Pol: %d\n", niza[i].pol);
        printf("Vozrast: %d\n", niza[i].vozrast);
        printf("Brachna sostojba: %d\n", niza[i].brachnaSostojba);
        printf("Kredibilnost: %d\n", niza[i].kredibilnost);
        printf("Adresa: %s\n", niza[i].adresa);
        printf("Tekovna plata: %.2f\n", niza[i].tekovnaPlata);
        printf("Minata plata: %.2f\n", niza[i].minataPlata);
        printf("\n");
    }

    return 0;
}

void swap(Vraboten *vraboten1, Vraboten *vraboten2)
{
    Vraboten hold;

    hold = *vraboten1;
    *vraboten1 = *vraboten2;
    *vraboten2 = hold;
}

void sortKred(Vraboten niza[], int n) {
    for(int i=1; i<n; i++) {
        for(int j=0; j<n-1; j++) {
            if(niza[j].kredibilnost < niza[j+1].kredibilnost) {
                swap(&niza[j], &niza[j+1]);
            }
        }
    }
}

void sortTekovnaPlata(Vraboten niza[], int n) {
    for(int i=1; i<n; i++) {
        for(int j=0; j<n-1; j++) {
            if(niza[j].tekovnaPlata < niza[j+1].tekovnaPlata) {
                swap(&niza[j], &niza[j+1]);
            }
        }
    }
}

void sortMinataPlata(Vraboten niza[], int n) {
    for(int i=1; i<n; i++) {
        for(int j=0; j<n-1; j++) {
            if(niza[j].minataPlata < niza[j+1].minataPlata) {
                swap(&niza[j], &niza[j+1]);
            }
        }
    }
}

void koregirajVraboten(Vraboten niza[], int n, int ID, char *ime, char *prezime, int pol, int vozrast, int brachnaSostojba,
                       int kredibilnost, char *adresa, double tekovnaPlata, double minataPlata) {
    for(int i=0; i<n; i++) {
        if(niza[i].ID == ID) {
            strncpy(niza[i].ime, ime, sizeof(niza[i].ime) - 1);
            niza[i].ime[sizeof(niza[i].ime) - 1] = '\0';
            strncpy(niza[i].prezime, prezime, sizeof(niza[i].prezime) - 1);
            niza[i].prezime[sizeof(niza[i].prezime) - 1] = '\0';
            niza[i].pol = pol;
            niza[i].vozrast = vozrast;
            niza[i].brachnaSostojba = brachnaSostojba;
            niza[i].kredibilnost = kredibilnost;
            strncpy(niza[i].adresa, adresa, sizeof(niza[i].adresa) - 1);
            niza[i].adresa[sizeof(niza[i].adresa) - 1] = '\0';
            niza[i].tekovnaPlata = tekovnaPlata;
            niza[i].minataPlata = minataPlata;
            break;
        }
    }
}

void koregirajKredibilnost(Vraboten niza[], int n) {
    for(int i=0; i<n; i++) {
        if(niza[i].tekovnaPlata > niza[i].minataPlata) {
            niza[i].kredibilnost +=3;
            niza[i].minataPlata = niza[i].tekovnaPlata;
        }
        else if(niza[i].tekovnaPlata < niza[i].minataPlata) {
            niza[i].kredibilnost-=3;
            niza[i].tekovnaPlata = niza[i].minataPlata;
        }
    }
}















