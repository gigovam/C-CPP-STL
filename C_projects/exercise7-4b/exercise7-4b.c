#include <stdio.h>

void vnesiMatrica(int n, int m, int matrix[n][m], int i, int j);
void pecatiMatrica(int n, int m, int matrix[n][m], int i, int j);

int main()
{
    int n, m;
    printf("Vnesi broj na elementi na matricata: ");
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    vnesiMatrica(n, m, matrix, 0, 0);
    return 0;
}

void vnesiMatrica(int n, int m, int matrix[n][m], int i, int j) {
    if (i < n) {
        if (j < m) {
            scanf("%d", &matrix[i][j]);
            vnesiMatrica(n, m, matrix, i, j + 1);
        } else {
            vnesiMatrica(n, m, matrix, i + 1, 0);
        }
    } else {
        pecatiMatrica(n, m, matrix, 0, 0);
    }
}

void pecatiMatrica(int n, int m, int matrix[n][m], int i, int j) {
    if (i < n) {
        if (j < m) {
            printf("%d ", matrix[i][j]);
            pecatiMatrica(n, m, matrix, i, j + 1);
        } else {
            printf("\n");
            pecatiMatrica(n, m, matrix, i + 1, 0);
        }
    }
}

