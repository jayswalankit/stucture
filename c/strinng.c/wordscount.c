#include<stdio.h>
int main(){
    char str[1000];

    puts("enter your string");
    fgets(str,1000,stdin);

   int count=0;
    for(int i=0;str[i];i++){
      if(str[i]==' '){
        count++;
      }
    
    }
       printf("%d",count+1);
}