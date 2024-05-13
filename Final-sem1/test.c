#include <stdio.h>

void printTree(int N) {
    int t=5;
    int upperRows = ((N + 1) / 2)+t;
    int lowerCols = (N + 1) / 2;
    for (int i = 1; i <= upperRows; i++) {
        for (int j = 0; j < upperRows - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
        for (int i = 0; i < 5; i++) {
        for (int j = 0; j < upperRows-lowerCols ; j++) {
            printf(" ");
        }
        for (int k = 0; k < N; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    
}

int main() {
    int N;
    scanf("%d", &N);
    
    if (N % 2 == 0 || N < 1 || N > 21) {
        
        return 0;
    }
    
    printTree(N);
    
    return 0;
}
