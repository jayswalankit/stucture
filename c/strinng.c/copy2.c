#include<stdio.h>
int main(){

    char str[100];
    printf("enter your no");
   fgets(str,100,stdin);

   char str1[100];
 

for(int i=0;str[i]!='\0';i++){
    if(str[i]!='\n'){
     str1[i]=str[i];
    }
}
printf("%s",str1);
}