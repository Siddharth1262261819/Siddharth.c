#include <stdio.h>

int main() {
    int i, j, r, c;
    printf("Enter the no. of rows & columns: ");
    scanf("%d %d", &r, &c);

    int matA[r][c], matB[r][c], matSum[r][c];

    printf("Enter first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matA[i][j]);
        }
    }

    printf("Enter second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matB[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            matSum[i][j] = matA[i][j] + matB[i][j];
        }
    }

    printf("The resultant matrix is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", matSum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
