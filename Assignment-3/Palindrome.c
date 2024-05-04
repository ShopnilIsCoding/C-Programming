#include <stdio.h>
#include <string.h>

int is_palindrome(char *str) {
    int len = strlen(str); 
    int start = 0; 
    int end = len - 1; 
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main() {
    char str[1001]; 

    scanf("%1000s", str);
    int result = is_palindrome(str);
    if (result == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
