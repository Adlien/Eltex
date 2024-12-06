#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    printf("Matrix size: ");
    scanf("%d", &n);
    int value = 1;
    int top = 0, bot = n - 1, left = 0, right = n - 1; 
    int matrix[n][n];
    while (value <= n*n)
    {
        for (int i = left; i <= right; i++)
        {
            matrix[top][i] = value++;
        } 
        top++;

        for (int i = top; i <= bot; i++)
        {
            matrix[i][right] = value++;
        }
        right--;
        for (int i = right; i >= left; i--)
        {
            matrix[bot][i] = value++;
        }
        bot--;
        for (int i = bot; i >= top; i--)
        {
            matrix[i][left] = value++;
        }
        left++;
    }
    
    //print matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}