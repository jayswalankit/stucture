#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    puts("enter your string");
    fgets(str,1000,stdin);
    str[strcspn(str, "\n")] = '\0';

     char str1[1000];  
    puts("enter your string");
    fgets(str1,1000,stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    if(strcmp(str,str1)==0){
        printf("yes");
    }
    else{
        printf("no");
    }
     
}