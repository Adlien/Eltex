#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    printf("Matrix size: ");
    scanf("%d", &n);
    int matrix[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) matrix[i][j] = (i <= j)? 1:0;
    //print matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}