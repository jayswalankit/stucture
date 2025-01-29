
#include <Stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    char str1[1000];
    int isfound = 1;
    fgets(str, 1000, stdin);
    fgets(str1, 1000, stdin);
    str[strcspn(str, "\n")] = '\0';
    str1[strcspn(str1, "\n")] = '\0';
    for (int i = 0;i<str[i]; i++)
    {
        
            if (str[i] != str1[i])
            {

                isfound = 0;
                break;

            }
    
    }
    if (isfound == 1)
    {
        printf("matched");
    }
    else
    {
        printf("not matched");
}
}