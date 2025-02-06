#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n;
    printf("enter your size");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*4);
    printf("enter your no");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int n1;
    printf("enter your size");
    scanf("%d",&n1);
int newsize=n+n1;
arr=(int*)realloc(arr,newsize*sizeof(int));
   double result=0;
    printf("enter your new number");
    for(int i=n;i<newsize;i++){
    scanf("%d",&arr[i]);
}
    for(int i=0;i<newsize;i++){
        result=sqrt(arr[i]);
    printf("%lf\n",result);
}
}