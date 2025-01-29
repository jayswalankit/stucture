
#include <stdio.h>

int main() {
    
    int n;
    printf("enter your element no");
    scanf("%d",&n);
    int maxm[n];
    printf("enter your no");
    int i=0;
    int max=0,min=999,j=0,max1=0,max2=0;
    for(;i<n;i++){
        scanf("%d",&maxm[i]);
    }
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
       if (maxm[i] >maxm[j]) {
           max2=maxm[i];
            maxm[i] = maxm[j]; 
            maxm[j] = max2;
       }
       
       
      }                                                         
      printf("%d\n",maxm[i]);
    }
    
    return 0;
}

// 1 2 3 4 5 