#include<stdio.h>
int main(){
    int n;
    printf("enter your no");
    scanf("%d",&n);
    int sume[n];
    printf("enter your no");
    for(int i=0;i<n;i++){
        scanf("%d",&sume[i]);
    }
    int sum=0,count=0;
    for(int i=0;i<n;i++){
        sum+=sume[i];
        count++;
    }
    int avg=sum/count;
    printf("%d=average",avg);
}