#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr=(int*)calloc(3,sizeof(int) );
    printf("enter your no you want to sum");
    for(int i=0;i<3;i++){
        scanf("%d",arr+i);
    }
    int sum=0;
    for(int i=0;i<3;i++){
        sum+=*(arr+i);
    }
    printf("%d",sum);

}