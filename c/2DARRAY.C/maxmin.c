#include<stdio.h>
int main(){
    int r,c;
    printf("enter your no");
    scanf("%d%d",&r,&c); 
    int num[r][c];
    printf("enter your element");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
       scanf("%d",&num[i][j]);
        }
    }
  int max=0,min=999;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        int n=num[i][j];
        if(n>max){
            max=n;
        }
        if(n<min){
            min=n;
        }
       printf("%d ",n);
    }
    printf("\n");
  }
printf("%d=max\n%d=min",max,min);
}