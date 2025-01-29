
#include <stdio.h>

int main() {
    
    int n;
    printf("enter your element no");
    scanf("%d",&n);
    int maxm[n];
    printf("enter your no");
    int max=0,min=999,j=0,max1=0;
    for(int i=0;i<n;i++){
        scanf("%d",&maxm[i]);
        j=maxm[i];
        if(j>max){
            max=j;
        
        }
        
        if(j<min){
            min=j;
        }
    }
    printf("%d=maximum no",max1);
    return 0;
}