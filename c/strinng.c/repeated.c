#include<stdio.h>
int main(){

char str[1000];
printf("enter your string");
fgets(str,1000,stdin);

int a;

for( int i=0;str[i];i++){
    for(int j=i+1;str[j];j++){
     if(str[i]==str[j]){
        
         a=str[i];
         
     }

    }

    

}
printf("%c",a);

return 0;

}