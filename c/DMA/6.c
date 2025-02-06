#include<stdio.h>
#include<stdlib.h>
 int main(){
    int n;
    printf("enter your size");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*4);
    int *p=ptr;
    for(int i=0;i<n;i++){
        scanf("%d",&(*p));
        p++;// address aage badh raha hai
    }
     for(int i=0;i<n;i++){
        printf("%d\n",*ptr);
        ptr++;
        
    }

 }