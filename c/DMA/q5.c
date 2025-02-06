#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter your size");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*4);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
 
    int newsize=n+2;
    arr=(int*)realloc(arr,newsize*sizeof(int));
    printf("enter your newno");
    for(int i=n;i<newsize;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<newsize;i++){
        printf("%d",arr[i]);
    }
    

}
