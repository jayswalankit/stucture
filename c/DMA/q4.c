#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
     printf("enter your size");
     scanf("%d",&n);
 int *arr=(int*)calloc(n,4);

 printf("enter your no");
 for(int i=0;i<n;i++){
 scanf("%d",&arr[i]);
 }
 int a=1;
 for(int i=0;i<n;i++){
 a*=arr[i];     
 }
 printf("%d",a);
}