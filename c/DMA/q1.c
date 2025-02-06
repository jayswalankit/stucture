#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("entere your size");
    scanf("%d",&n);
int* arr=(int*)malloc(n*4);
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);

}
for(int i=0;i<n;i++){
    printf("%d",arr[i]);

}


}