#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long int M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        long long missing_number = -1;

        if (A > 0 && B > 0 && C > 0) {
            if (M == 0) {
                missing_number = 0;
            } else if (M % (A * B * C) == 0) {
                missing_number = M / (A * B * C);
            }
        }

        printf("%lld\n", missing_number);
    }

    return 0;
}
