#include<stdio.h>

int main(){
    int n,a;
    printf("enter your no");
    scanf("%d%d",&n,&a);
   int *ptr=&n;
   int **pptr=&ptr;
    int *ptr1=&a;
    int **pptr1=&ptr1;
  int tem=**pptr;
  **pptr=**pptr1;
  **pptr1=tem;
  printf("%d%d",**pptr,**pptr1);
}




