#include<stdio.h>
int main(){
    int n;
    printf("enter your no");
    scanf("%d",&n); 
    int num[n];
    printf("enter your no");
    
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
       
    }
    int a;
       printf("enter your no");
     scanf("%d",&a);
     for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){ 
    if(num[i]==a){
        int tem=num[i];
        num[i]=num[j];
        num[j]=tem;
    }
   
    }
     }
for(int i=0;i<n-1;i++){
  printf("%d",num[i]);
}
return 0;
}
