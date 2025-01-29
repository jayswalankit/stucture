#include<stdio.h>
int main(){

char str[1000];
puts("enter your string");
fgets(str,1000,stdin);

       int i=0;
    for(;str[i];i++){  
        if(str[i]=='t'||str[i]=='h'||str[i]=='e'){
            continue;
           
        } 
       printf("%c",str[i]);
    }
    



}