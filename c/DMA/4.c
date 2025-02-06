#include<stdio.h>
#include<stdlib.h>
int main(){
    int* arr=(int*)malloc(5*sizeof(int));
      printf("enter your no");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        // printf("%d",arr[i]);
         printf("%d",arr[i]);
        
    }
     int newsize=5-2;
         arr=(int*) realloc(arr,newsize*sizeof(int));
    //      for(int i=5;i<newsize;i++){
    //      printf("enter your no");
    //     scanf("%d",&arr[i]);
    // }
    for(int i=0;i<newsize;i++){
        // printf("%d",arr[i]);
         printf("%d",arr[i]);
        
    }
 } 