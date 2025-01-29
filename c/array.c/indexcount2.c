#include<stdio.h>
int main(){
    int n;
    printf("enter your no");
    scanf("%d",&n);
    int index[n];
    for(int i=0;i<n;i++){
        scanf("%d",&index[i]);
    }
    for(int i=0;i<n;i+=2){
        
            printf("%d=index no=%d=no\n",i,index[i]);
        
    }
}
// odd index ke liye int i=1 kar dena hai sirf printf wale me;