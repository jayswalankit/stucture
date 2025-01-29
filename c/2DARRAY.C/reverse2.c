#include<stdio.h>
int main(){
 int r=3,c=3;
int arr[r][c];
printf("enter your no");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      printf("Enter element at index %d %d: ",i,j);
        scanf("%d",&arr[i][j]);
    }
}

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
       
            
              //   int tem=arr[i][j];
              // arr[i][j]= arr[r-1-i][c-1-j];
              //  arr[2-i][2-j] =tem;
            
        
       
       

    printf("%d ",arr[i][j]);
    
    }
   
  printf("\n");
}


}

