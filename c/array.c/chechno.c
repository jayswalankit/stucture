#include<stdio.h>
int main(){
    int n;
    printf("enter your size");
    scanf("%d",&n); 
    int a;
       printf("enter your index no");
     scanf("%d",&a);
    int num[n];
    printf("enter your element");
    
    for(int i=0;i<n;i++){       
        scanf("%d",&num[i]);
    }
    
    for(int i=0;i<n;i++){ 
    if(a==i){
        printf("number=%d\n",num[i]);
    }
   
    }
     return 0;
}