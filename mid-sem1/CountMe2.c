#include <stdio.h>

int main() {
    char S[100001];
    scanf("%s", S);
    
    int consonant_count = 0;
    char c;
    
    for (int i = 0; S[i] != '\0'; i++) {
        c = S[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            consonant_count++;
        }
    }
    
    printf("%d", consonant_count);
    
    return 0;
}
