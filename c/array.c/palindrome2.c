#include<stdio.h>
int main(){
    int n;
    printf("enter your element no");
    scanf("%d",&n);
    int palin [n];
printf("enter your no");
for(int i=0;i<n;i++){
    scanf("%d",&palin[i]);
}
for(int i=0;i<n/2;i++){
    if(palin[i]!=palin[n-i-1]){
        printf("no");
    }
    else{
        printf("yes");
    }
}
return 0;
}