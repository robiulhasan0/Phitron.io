#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
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
            B[i] = A[i];
        }
        qsort(B, N, sizeof(int), compare);

        for (int i = 0; i < N; i++) {
            C[i] = abs(A[i] - B[i]);
        }
        for (int i = 0; i < N; i++) {
            printf("%d", C[i]);
            if (i < N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
