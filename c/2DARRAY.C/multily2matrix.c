#include <stdio.h>
int main()
{
    int r = 2, c = 2, product = 1;
    int arr[r][c], arr1[r][c], arr2[r][c];
    printf("enter your no");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("enter your no");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr2[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                arr2[i][j] += arr[i][k] * arr1[k][j];
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}



