#include <stdio.h>

int main() {
    int row, col;
    scanf("%d %d", &row, &col);

    if (row != col) {
        printf("NO\n");
        //return 0;
    }
    int a[row][col];

    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            if (i == j || i + j == row - 1) 
            {
                if (a[i][j] != 1) {
                    printf("NO\n");
                    //return 0;
                }
            } 
            else 
            {
                if (a[i][j] != 0) {
                    printf("NO\n");
                    //return 0;
                }
            }
        }
    }

    printf("YES\n");
    return 0;
}
