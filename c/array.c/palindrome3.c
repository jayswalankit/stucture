#include<stdio.h>
int main(){
    int n,yes=1;
    printf("enter your element no");
    scanf("%d",&n);
    int palin [n];
printf("enter your no");
for(int i=0;i<n;i++){
    scanf("%d",&palin[i]);
}
for(int i=0;i<n/2;i++){
    if(palin[i]!=palin[n-i-1]){
        yes=0;
        break;
    }
}
if(yes){
    printf("yes");
}
else{ 
    printf("no");
}
return 0;
}    