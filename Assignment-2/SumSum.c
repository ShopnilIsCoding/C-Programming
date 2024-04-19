#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int sum_p = 0;
    int sum_n = 0;
    int v;
    for (int i = 0; i < N; i++) {
        scanf("%d", &v);
        if (v > 0) {
            sum_p += v;
        } else if (v < 0) {
            sum_n += v;
        }
    }
    printf("%d %d\n", sum_p, sum_n);

    return 0;
}
