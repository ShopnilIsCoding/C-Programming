#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        
        char r[N + 1]; 
        scanf("%s", r);
        
        int t = 0, p = 0;
        for (int i = 0; i < N; i++) {
            if (r[i] == 'T')
                t++;
            else if (r[i] == 'P')
                p++;
        }

        if (t > p)
            printf("Tiger\n");
        else if (t < p)
            printf("Pathaan\n");
        else
            printf("Draw\n");
    }

    return 0;
}
