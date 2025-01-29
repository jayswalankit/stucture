#include<stdio.h>
int main(){
    int n;
    printf("enter your size");
    scanf("%d",&n);
    char str[n];
    printf("enter your element");
   for(int i=0;i<n-1;i++){
    str[i]=getchar();
    putchar(str[i]);
   
   }
   for(int i=0;i<n;i++){
    str[i]=getchar();
    putchar(str[i]);
  
   }
return 0;
}