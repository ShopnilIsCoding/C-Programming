#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if (N > 0) {
        for (int i = 1; i <= N; i++) {
            if (i > 1) {
                printf(" ");
            }
            printf("%d", i);
        }
    } else {
        for (int i = N; i <= 0; i++) {
            if (i != N) {
                printf(" ");
            }
            printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}
