#include <stdio.h>

void vnesiMatrica(int n, int m);
void pecatiMatrica(int n, int m, int matrix[n][m]);

int main()
{
    int n, m;
    printf("Vnesi broj na elementi na matricata: ");
    scanf("%d %d", &n, &m);
    vnesiMatrica(n,m);
    return 0;
}

void vnesiMatrica(int n, int m) {
    int matrix[n][m];

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    pecatiMatrica(n, m, matrix);
}

void pecatiMatrica(int n, int m, int matrix[n][m]) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
