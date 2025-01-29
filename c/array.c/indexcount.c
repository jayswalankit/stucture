#include<stdio.h>
int main(){
    int n;
    printf("enter your no");
    scanf("%d",&n);
    int index[n];
    for(int i=0;i<n;i++){
        scanf("%d",&index[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            printf("%d=index no=%d=no\n",i,index[i]);
        }
    }
}