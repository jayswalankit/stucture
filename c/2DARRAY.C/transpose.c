#include <stdio.h>
int main()
{
    int r = 2, c = 3;
    int arr[r][c];
    printf("enter your no");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++)

    {
        for (int j = 0; j < c; j++) 
        {
           printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j = j + 1)
        {
        printf("%d ", arr[j][i]);
           
        }
          printf("\n");
        
    }
}





