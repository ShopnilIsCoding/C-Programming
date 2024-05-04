#include <stdio.h>

void printPattern(int N) {
    int totalLines = 2 * N - 1;  
    for (int i = 0; i < totalLines; i++) {
        int numSymbols;
        char symbol; 
        if (i < N) {
            numSymbols = 2 * i + 1;
        } else {
            numSymbols = 2 * (totalLines - i - 1) + 1;
        }
        if (i % 2 == 0) {
            symbol = '#';
        } else {
            symbol = '-';
        }
        int numSpaces = N - (i + 1);
        if (i >= N) {
            numSpaces = (i - N + 1);
        }
        for (int j = 0; j < numSpaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < numSymbols; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    printPattern(N);
    return 0;
}
