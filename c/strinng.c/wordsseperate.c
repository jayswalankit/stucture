#include<stdio.h>
int main(){
    char str[1000];
    puts("enter your string");
    fgets(str,1000,stdin);
    for(int i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
            if(str[i+1]!='\0'&&str[i+1]!='\n'){
               printf(" ,");

            }
            
       
    }
    

}