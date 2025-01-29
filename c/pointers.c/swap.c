#include<stdio.h>

void _swap(int *n,int *n1){
     int tem=*n;
     *n=*n1;
     *n1=tem;
     int sum=*n+*n1;
     printf("%d\n",sum);
     
  
}

int main(){
    int n,n1;
    printf("enter your no");
    scanf("%d%d",&n,&n1);
   
   
   _swap(&n,&n1);
   printf("n=%d,n1=%d",n,n1);
   
}


