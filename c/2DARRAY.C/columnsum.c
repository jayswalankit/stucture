#include <stdio.h>
int main()
{
    int r, c;
    printf("enter your size");
    scanf("%d%d", &r, &c);
    int num[r][c];
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
        int sum = 0;
        for (int j = 0; j < c; j++)
        {

            printf("%d ", num[i][j]);
        }

        printf("\n");
    }
    for (int j = 0; j < c; j++)
    {
        int sum = 0;

        for (int i = 0; i < r; i++)
        {
            sum += num[i][j];
        }
        printf("=%d", sum);
    }
}