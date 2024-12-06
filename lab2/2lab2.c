#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    printf("Array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter your array \n");
//    for (int i = 0; i < n; i++) arr[i] = i + 1;
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    //print array
    for (int i = n - 1; i >= 0; i--) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}