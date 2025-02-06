#include<stdio.h>
#include<stdlib.h>
int main(){
int *arr=(int*)malloc(5*sizeof(int));
printf("enter your no");
for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
}
// for(int i=0;i<5;i++){
//     printf("%d",arr[i]);
//}
int newsize=5+3;
arr=(int *)realloc(arr,newsize*sizeof(int));
printf("enter the no you want to add");
for(int i=5;i<newsize;i++){
    scanf("%d",&arr[i]);
}
printf("The finall output is");
for(int i=0;i<newsize;i++){
    printf("%d",arr[i]);
}
}
