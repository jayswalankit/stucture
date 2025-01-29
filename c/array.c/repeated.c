#include<stdio.h>
int main(){
    int n;
    printf("enter your no");
    scanf("%d",&n); 
    int num[n];
    printf("enter your no");
    int i=0;
    for(;i<n;i++){       
     scanf("%d",&num[i]);   
    }
    int a,count=0;
    printf("enter your no");
    scanf("%d",&a);
    for(int i=0;i<n;i++){
       if(num[i]==a){
           count++;
           printf("%d\n",num[i]);
       }
    }
   printf("%d=count",count);
}