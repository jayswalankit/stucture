#include<stdio.h>
int main(){ int n;
    printf("enter your element no");
    scanf("%d",&n);
   
    int rev[n];
    printf("enter your no");
    for(int i=0;i<n;i++){
        scanf("%d",&rev[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("%d\n",rev[i]);
    }
    
return 0;
}