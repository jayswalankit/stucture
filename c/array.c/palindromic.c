#include<stdio.h>
int main(){
    int n;
    printf("enter your no");
    scanf("%d",&n);
    int palin[n];
    printf("enter your no");
    
    for(int i=0;i<n;i++){
    scanf("%d",&palin[i]);
    }
    for(int i=0;i<n;i++){
        int num=palin[i];
        int rem=0,rev=0;
    
    for(;num!=0;num/=10){
        rem=num%10;
        rev=rem+(rev*10);
    }
    if(rev==palin[i]){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    }
}