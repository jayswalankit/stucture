#include<stdio.h>
#include<stdlib.h>
int main(){
    int r,c;
    printf("enter your row&column");
    scanf("%d%d",&r,&c);
    int **arr=(int**)malloc(r*sizeof(int));
    for(int i=0;i<r;i++){
        arr[i]=(int*)malloc(c*sizeof(int));
    }
        printf("enter your element of matrix");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                scanf("%d",&arr[i][j]);
            }
        
        }
    
   
    int **arr1=(int**)malloc(r*sizeof(int));
    for(int i=0;i<r;i++){
        arr1[i]=(int*)malloc(c*sizeof(int));
    }
        printf("enter your element of matrix");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                scanf("%d",&arr1[i][j]);
            }
            
        }
    
    int **arr2=(int**)malloc(r*sizeof(int));
    
    for(int i=0;i<r;i++){
        arr2[i]=(int*)malloc(c*sizeof(int));
    }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr2[i][j]=arr[i][j]+arr1[i][j];
            
           
        }
        
    }
    for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
              printf("%d ",arr2[i][j]);
            }
            printf("\n");
        }
}