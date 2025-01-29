

#include <stdio.h>
int main()
{

    char equal[1000];

    puts("enter your string");
    fgets(equal, 1000, stdin);

    char equal1[1000];
    puts("enter your string");
    fgets(equal1, 1000, stdin);

    int check = 0;
    for (int i = 0; equal[i]; i++)
    {
        if (equal[i] != equal1[i])
        {
            check = 1;
        }
    }

    if (check)
    {
        printf("Not equal");
    }
    else
    {
        printf("Equal");
    }
}
/// minor pucho
