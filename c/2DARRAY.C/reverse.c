#include<stdio.h>
int main(){
 int r=3,c=4;
int arr[r][c];
printf("enter your no");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
}
for(int i=r-1;i>=0;i--){
    for(int j=c-1;j>=0;j--){
        printf("%d ",arr[i][j]);
        
        
    }
   
printf("\n");
    
}

}
