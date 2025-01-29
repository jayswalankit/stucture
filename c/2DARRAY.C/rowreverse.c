#include <stdio.h>
int main()
{
    int r, c;
    printf("enter your size");
    scanf("%d%d", &r, &c);
    int num[r][c], sum = 00;
    printf("enter your element");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            printf("%d ", num[i][j]);
        }
        printf("\n");
    }

    printf("new");
    for (int i = r - 1; i >= 0; i--)
    {
        for (int j = c - 1; j >= 0; j--)
        {
            if (i == 2)
            {
                printf("%d ", num[i][j]);
            }
        }
        printf("\n");
    }
}
