#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter your size");
    scanf("%d",&n);
    int* arr=(int *)calloc(n,sizeof(int));
    printf("enter your no");
    int max=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max=arr[i];
        }
    }
   
     printf("%d",max);
    
}