#include<stdio.h>
int main(){
    int r,c;
    printf("enter your size");
    scanf("%d%d",&r,&c);
    int num[r][c];
    printf("enter your no");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&num[i][j]);
        }
         
    }
    int a=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        int sum=sum+num[i][j];
             a=sum;
printf("%d",a);
        }
       
        printf("\n");
    }
    return 0;
}