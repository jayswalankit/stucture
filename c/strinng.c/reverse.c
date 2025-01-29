#include <stdio.h>
int main()
{
    char str[40];
    puts("enter your word");
    fgets(str,40,stdin);
    int size = 0;
    for (int k = 0; str[k] != '\0'; k++)
    {
        size++;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            int tem = str[i];
            str[i] = str[j];
            str[j] = tem;
        }
    }
    puts("the reverse is ");
    puts(str);
    return 0;
}