#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        char S[100001];

        scanf("%d", &N);
        scanf("%s", S);

        int tigerWins = 0;
        int pathanWins = 0;

        for (int i = 0; i < N; i++) {
            if (S[i] == 'T') {
                tigerWins++;
            } else if (S[i] == 'P') {
                pathanWins++;
            }
        }

        if (tigerWins > pathanWins) {
            printf("Tiger\n");
        } else if (pathanWins > tigerWins) {
            printf("Pathaan\n");
        } else {
            printf("Draw\n");
        }
    }

    return 0;
}
