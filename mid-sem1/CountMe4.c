#include <stdio.h>

int main() {
    char S[10001];
    scanf("%s", S);
    
    int counts[26] = {0};
    
    for (int i = 0; S[i] != '\0'; i++) {
        counts[S[i] - 'a']++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            printf("%c - %d\n", 'a' + i, counts[i]);
        }
    }
    
    return 0;
}
