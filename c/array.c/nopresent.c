#include<stdio.h>
int main(){
    int n,yes=0;
    printf("enter your no");
    scanf("%d",&n); 
    int num[n];
    printf("enter your no");
    int i=0;
    for(;i<n;i++){
        scanf("%d",&num[i]);
       
    }
    int a;
       printf("enter your no");
     scanf("%d",&a);
    for(int i=0;i<n;i++){ 
    if(a==num[i]){
        yes=1;
    }
   
    }
    if(yes==1){
        printf("yes number is available");
    }
    else{
        printf("no number is available");
    }
     return 0;
}