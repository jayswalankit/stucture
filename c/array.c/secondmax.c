
#include <stdio.h>

int main() {
    
    int n;
    printf("enter your element no");
    scanf("%d",&n);
    int maxm[n];
    printf("enter your no");
    int max=0,j=0,max1=0,max2=0;
    for(int i=0;i<n;i++){
        scanf("%d",&maxm[i]);

       if (maxm[i] > max) {
            max1 = max; 
            max = maxm[i];
       }
       else if (maxm[i] > max1 && maxm[i] != max) {
          max1 = maxm[i];
           }
        
    }
    printf("%d=maximum no1\n",max1);
    
    return 0;
}