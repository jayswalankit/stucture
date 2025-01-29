#include<stdio.h>
int main(){
 int r=2,c=3,sum=0;
int arr[r][c];
printf("enter your no");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
}
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",arr[i][j]);
        sum+=arr[i][j];
        
    }
    printf("\n");
    
   
}
printf("%d ",sum);

}






