#include<stdio.h>
int main(){
 int r=4,c=3;
int arr[r][c];
printf("enter your no");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
}
 int product=1;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",arr[i][j]);
        product*=arr[i][j];
        
    }
    printf("\n");
    
   
}
printf("%d =product",product);

}
