#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);
        
        long long D = M / (A * B * C); 
        if(M==0)
        {
            printf("0\n");
        }
        else if (D == 0 || M != A * B * C * D) {
            printf("-1\n"); 
        } else {
            printf("%lld\n", D);
        }
    }

    return 0;
}
