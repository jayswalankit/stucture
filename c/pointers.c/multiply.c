#include<stdio.h>
int pro(int a,int n){
    int product=a*n;
    return product;
}
int multi(int *a,int *n){
   int product=(*a)*(*n);
}
int main(){
    int a,n;
    printf("enter your no");
    scanf("%d%d",&a,&n);
   int ans= multi( &a,&n);
   printf("%d",ans);
}