#include <stdio.h>
int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    if (N != M) {
        printf("NO\n");
        return 0;
    }
    int matrix[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    int isJadu = 1; 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
           
            if ((i != j && i + j != N - 1) && matrix[i][j] != 0) {
                isJadu = 0; 
                break;
            }
            
            if ((i == j || i + j == N - 1) && matrix[i][j] != 1) {
                isJadu = 0; 
                break;
            }
        }
    }
    if (isJadu)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
