#include<stdio.h>
int main(){ int n;
    printf("enter your element no");
    scanf("%d",&n);
   
    int rev[n];
    printf("enter your no");
    for(int i=0;i<n;i++){
        scanf("%d",&rev[i]);

    }


    for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        int tem= rev[i];
        rev[i]=rev[j];
        rev[j]=tem;
    }
printf("%d",rev[i]);
        
    }
    
    
return 0;
}