#include <stdio.h>
int main() {
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    if (n < 2 || m < 2) {
        return 0;
    }

    int matrix[n][m];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (j = 0; j < m; j++) {
        printf("%d ", matrix[n - 1][j]);
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][m - 1]);
    }
    printf("\n");

    return 0;
}
