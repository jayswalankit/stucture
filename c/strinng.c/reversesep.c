#include <stdio.h>
int main()
{
    char str[1000];
    puts("enter your no");
    fgets(str, 1000, stdin);

    for (int i = 0; str[i]; i++)
    {
        for (int j = i + 1; str[j]; j++)
        {
            int tem = str[i];
            str[i] = str[j];
            str[j] = tem;
        }
        

        if (str[i-1] != '\0' )
        {
            printf(" ,");
            printf("%c", str[i]);
        }
    }
}
// last wala comma hatana hai...