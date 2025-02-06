#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter your no");
    scanf("%d",&n);
    int *arr=(int*)calloc(n,4);
    printf("enter your no");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
 for(int i=0;i<n;i++){
       
     arr[i]=i*i;
     printf("%d",arr[i]);
    }

}