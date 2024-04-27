#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    int divisible_by_2 = 0;
    int divisible_by_3 = 0;
    
    for (int i = 0; i < N; i++) {
        if (A[i] % 2 == 0) {
            divisible_by_2++;
        } else if (A[i] % 3 == 0) {
            divisible_by_3++;
        }
    }
    
    printf("%d ", divisible_by_2);
    printf("%d", divisible_by_3);
    
    return 0;
}
