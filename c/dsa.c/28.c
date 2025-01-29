#include<stdio.h>
int main(){
    int n;
    printf("enter your size");
    scanf("%d",&n);
    int d;
    printf("enter  how many times ");
    scanf("%d",&d);
 int arr[n];
 printf("enter your elements");
 for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
 }
 for(int i=0;i<d;i++){
int b=arr[n-1];
 for(int i=n-1;i>0;i--){
    arr[i]=arr[i-1];
        
 }
 arr[0]=b;

 
 }
   for(int i=0;i<n;i++){
    printf("%d",arr[i]);
   }

 }
 

    
