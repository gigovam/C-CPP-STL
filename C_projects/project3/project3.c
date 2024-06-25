#include <stdio.h>

void pecatiNiza(int n, int m, int matrica[n][m]);
void max(int n, int m, int matrica[n][m]);
void min(int n, int m, int matrica[n][m]);
void prosek(int n, int m, int matrica[n][m]);

int main()
{
    int n, m, izbor;
    void (*obraboteniOceni[4]) (int n, int m, int[n][m]) = {pecatiNiza, max, min, prosek};
    printf("Vnesi broj na studenti: ");
    scanf("%d", &n);
    printf("Vnesi broj na predmeti: ");
    scanf("%d", &m);
    int matrica[n][m];
    printf("Vnesi ocenki:");
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &matrica[i][j]);
        }
    }
    printf("Vnesi izbor:\n0 Ispechati ja nizata so oceni\n1 Najdi ja maksimalnataocena\n"
    "2 Najdi ja minimalnata ocena\n3 Ispecati ja prosechnata ocena za sekoja student\n4 Kraj\n");
    scanf("%d", &izbor);
    while(izbor>=0 && izbor<4) {
        (*obraboteniOceni[izbor])(n, m, matrica);
        printf("Vnesi izbor:\n0 Ispechati ja nizata so oceni\n1 Najdi ja maksimalnataocena\n"
        "2 Najdi ja minimalnata ocena\n3 Ispecati ja prosechnata ocena za sekoja student\n4 Kraj\n");
        scanf("%d", &izbor);
    }
    printf("Kraj na programata.");
    return 0;
}

void pecatiNiza(int n, int m, int matrica[n][m]) {
    for(int i=0; i<n; i++) {
        printf("Studentot so reden broj %d, gi ima slednite ocenki: ", i+1);
        for(int j=0; j<m ;j++) {
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }
}

void max(int n, int m, int matrica[n][m]) {
    for(int i=0; i<n; i++) {
        int max = matrica[i][0];
        for(int j=0; j<m ;j++) {
            if(max < matrica[i][j])
                max = matrica[i][j];
        }
        printf("Studentot so reden broj %d, ima maksimalna ocenka %d.\n", i+1, max);
    }
}

void min(int n, int m, int matrica[n][m]) {
    for(int i=0; i<n; i++) {
        int min = matrica[i][0];
        for(int j=0; j<m ;j++) {
            if(min > matrica[i][j])
                min = matrica[i][j];
        }
        printf("Studentot so reden broj %d, ima minimalna ocenka %d.\n", i+1, min);
    }
}

void prosek(int n, int m, int matrica[n][m]) {
    for(int i=0; i<n; i++) {
        int sum=0;
        for(int j=0; j<m ;j++) {
            sum+=matrica[i][j];
        }
        printf("Studentot so reden broj %d, ima prosek %.2f.\n", i+1, (float)sum/m);
    }
}












