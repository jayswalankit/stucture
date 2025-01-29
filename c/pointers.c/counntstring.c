#include <stdio.h>
int main()
{
    char str[100];
    puts("enter your elements");
    fgets(str, 100, stdin);
    int count = 0;
    char *ptr = &str[0];

    for (int i = 0; ptr[i]; i++)
    {
        count++;
    }
    count--;
    printf("%d", count);
}