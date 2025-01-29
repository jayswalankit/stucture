#include<stdio.h>
#include<string.h>
int main(){
char str[1000];
char abc[1000];
fgets(str,1000,stdin);
fgets(abc,1000,stdin);
char *ptr=&str[0];
char *ptr1=&abc[0];
    ptr[strcspn(ptr, "\n")] = '\0';  
    ptr1[strcspn(ptr1, "\n")] = '\0';
    strcat(ptr,ptr1);
    printf("%s",str);
   
}