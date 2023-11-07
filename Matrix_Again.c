#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int a[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // Output last row
    for (int j = 0; j < M; j++) {
        printf("%d ", a[N - 1][j]);
    }
    printf("\n");
    // Output last column
    for (int i = 0; i < N - 1; i++) {
        printf("%d ", a[i][M - 1]);
    }
    printf("%d ", a[N - 1][M - 1]);

    return 0;
}
