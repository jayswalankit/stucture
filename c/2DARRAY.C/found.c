#include<stdio.h>
int main(){
 int r=4,c=4;
int arr[r][c];
printf("enter your no");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
}
int a;
printf("enter your no");
scanf("%d",&a);
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        
        if(a==arr[i][j]){
            printf("[%d][%d]",i,j);
                   
        }
        
    }
    
} 


}
