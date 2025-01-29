// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n,repeat=0;
    printf("enter your element");
    scanf("%d",&n);
    int num[n],count=0;
     printf("enter your no");
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int a;
     for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
             if(num[i]==num[j]){
                 count++;
                 a=num[i];
               
             }
         }
         if(count>0){
             repeat=1;
             break;
         }
         else{
            repeat=0; 
         }
     }
     if(repeat==1){
         printf("%d=no\n",a);
     }
     else{
         printf("no\n");
    
     }
     printf("%d=count",count+1);
    return 0;
}