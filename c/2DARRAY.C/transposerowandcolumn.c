#include <stdio.h>
int main()
{
    int r, c;
    printf("enter your no");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    printf("enter your no");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("old\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    printf("new\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j = j + 1)
        {
            if (i == 2||j==2)
            {
                printf("%d ", arr[j][i]);
            }
            
            else{
                printf("%d ", arr[i][j]);
            }
        }

        printf("\n");
    }
}