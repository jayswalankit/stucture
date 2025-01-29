#include<stdio.h>
int main() {
    // Write C code here
    int n;
    printf("enter your size");
    scanf("%d",&n);
    int arr[n],count=0;
    printf("enter youur element 0and1\n");
    for(int i=0;;i++){
    scanf("%d",&i);
    if(i==0||i==1){
        arr[count]=i;
        count++;
        if(count==n){
            break;
        }
    }
    else{
        printf("invalid\n");
    }
    }
    printf("output");
    for(int i=0;i<n;i++){
    printf("%d",arr[i]);


}
}

