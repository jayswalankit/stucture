#include <stdio.h>
int main()
{
    char str[1000];
    puts("enter your string");
    fgets(str, 1000, stdin);

    int count = 0, count1 = 0, count2 = 0;

    for (int i = 0; str[i]; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
        else if (str[i] == 'b' || str[i] == 'c' || str[i] == 'd' || str[i] == 'f' || str[i] == 'g' || str[i] == 'h' || str[i] == 'j' || str[i] == 'k' || str[i] == 'l' || str[i] == 'm' || str[i] == 'n' || str[i] == 'p' || str[i] == 'q' || str[i] == 'r' || str[i] == 's' || str[i] == 't' || str[i] == 'v' || str[i] == 'w' || str[i] == 'x' || str[i] == 'y' || str[i] == 'z')
        {
            count1++;
        }
        else
        {
            count2++;
        }
        printf("%c", str[i]);
    }
    printf("%d\n=vowels", count);
    printf("%d\n=constants", count1);
    printf("%d=special character", count2);
}