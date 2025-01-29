#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char abc[100];
    

    fgets(str,100,stdin);
    fgets(abc,100,stdin);
    str[strcspn(str, "\n")] = '\0';  
    abc[strcspn(abc, "\n")] = '\0';
    strcat(str,abc);
    printf("%s",str);
    

}
