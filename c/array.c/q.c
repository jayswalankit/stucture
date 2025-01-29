
#include<stdio.h>
int main(){
    int s=5;
    int arr[s];
   int  count=0;
    while(count<s){
        int n;
        printf("enter your no");
        scanf("%d",&n);
        
        if(n==0||n==1){
            arr[count]=n;
            count++;
            
           if(count==s){
            break;
           }
           
               
        }
        else{

            printf("invalid");
            
        }
        
     
    }
    for(int i=0;i<s;i++){
        printf("%d",arr[i]);
        
    }
    return 0;
}