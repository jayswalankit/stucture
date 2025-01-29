#include<stdio.h>
int main(){
    int n;
    printf("enter your no");
    scanf("%d",&n);
    int arr[n];
    printf("enter your no");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j=1;
    for(int i=0;i<n;i++ ){
        j*=arr[i];
    }
    printf("%d",j);
}