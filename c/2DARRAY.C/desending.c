#include <stdio.h>
int main()
{
    int r, c;
    printf("enter your no");
    scanf("%d%d", &r, &c);
    int num[r][c];
    printf("enter your no");
    int max = 0, min = 999;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            scanf("%d", &num[i][j]);
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            for (int k = 0; k < r; k++)
            {
                for (int l = 0; l < c; l++)
                {
                    if (num[k][l] > num[i][j])
                    {
                        int tem = num[k][l];
                        num[k][l] = num[i][j];
                        num[i][j] = tem;
                    }
                }
            }
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
}
                                                                                   