#include<stdio.h>
int main(){
    int num;
    printf("enter your no");
    scanf("%d",&num);
    int num1;
    printf("enter your 2nd no");
    scanf("%d",&num1);
    int *ptr=&num;
    int *ptr1=&num1;
    if(*ptr>*ptr1){
        printf("%d=max",*ptr);
    }
    else{
        printf("%d=max",*ptr1);
    }
}