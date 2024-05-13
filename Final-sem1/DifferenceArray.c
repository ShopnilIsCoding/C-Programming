#include <stdio.h>
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}
int absolute(int a, int b) {
    if (a > b) {
        return a - b;
    } else {
        return b - a;
    }
}
void calculateDifference(int A[], int B[], int C[], int N) {
    for (int i = 0; i < N; i++) {
        C[i] = absolute(A[i], B[i]);
    }
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        int A[N], B[N], C[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        for (int i = 0; i < N; i++) {
            B[i] = A[i];
        }
        selectionSort(B, N);
        calculateDifference(A, B, C, N);
        for (int i = 0; i < N; i++) {
            printf("%d ", C[i]);
        }
        printf("\n");
    }
    
    return 0;
}
