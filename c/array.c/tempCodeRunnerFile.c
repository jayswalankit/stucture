#include<stdio.h>
int main(){
    int n;
    printf("ente your size");
    scanf("%d",&n);
    int arr[n];
    printf("enter your elements");
    for(int i=0;i<n;i++){
        
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
       int  flag=0;
    for(int j=0;j<n;j++){
        if(arr[i]==arr[j]){
          flag=1;
          break;
           
        }
    }
     if(flag==0){
        printf("output");
        printf("%d\n",arr[i]);
    }
    }
   
    

}
