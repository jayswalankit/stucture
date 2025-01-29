#include<stdio.h>
int main(){
int r,c;
printf("enter your no");
scanf("%d%d",&r,&c);
int arr[r][c],sum=0,arr2[r][c];
printf("enter your matrix element");
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
scanf("%d=1st",&arr[i][j]);
}
}
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
scanf("%d=1st",&arr2[i][j]);
}
}
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        
        sum=arr[i][j]+arr2[i][j];
        printf("%d ",sum);
    }
    printf("\n");
}
}
