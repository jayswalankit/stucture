#include<stdio.h>
#include<stdlib.h>
 
 int main(){
    int* arr=(int*)malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
         printf("enter your no");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        // printf("%d",arr[i]);
         printf("%d",arr[i]);
    }
 }
 // ptr== nul is why important check.... H.W.