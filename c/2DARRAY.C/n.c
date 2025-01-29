// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int r,c;
    // Write C code here
    printf("Try programiz.pro");
    scanf("%d%d",&r,&c);
    int arr[r][c],arr1[r][c],sum[r][c];
    printf("enter your no");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter your no");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
     
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i][j]=0;
            sum[i][j]=arr[i][j]+arr1[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    return 0;