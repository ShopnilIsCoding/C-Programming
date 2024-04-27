#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        char S[10001];
        scanf("%s", S);
        
        int capital_count = 0;
        int small_count = 0;
        int digit_count = 0;
        
        for (int j = 0; S[j] != '\0'; j++) {
            if (S[j] >= 'A' && S[j] <= 'Z') {
                capital_count++;
            } else if (S[j] >= 'a' && S[j] <= 'z') {
                small_count++;
            } else if (S[j] >= '0' && S[j] <= '9') {
                digit_count++;
            }
        }
        
        printf("%d %d %d\n", capital_count, small_count, digit_count);
    }
    
    return 0;
}
