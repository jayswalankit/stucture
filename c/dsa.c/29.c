#include<stdio.h>
int main(){
    int n;
    printf ("enter your size");
    scanf("%d",&n);
    int arr[n];
    printf("enter your elemennts");
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    int sum=0,missingno=0;
    for(int i=0;i<n;i++){
        
      sum +=arr[i];
        
    }
    
   missingno=(n*(n+1))/2;
   missingno-=sum;
   printf("%d",missingno);

}



