// #include<stdio.h>
// int main(){
//     int n,n1,sum=0;
//     int *ptr=&n;
//     int *ptr1=&n1;
//     printf("enter your no");
//     scanf("%d%d",&n,&n1);
//     sum=*ptr+*ptr1;
//     printf("%d",sum);

// }
#include<stdio.h>
int main(){
    int num;
    printf("enter your first no");
    scanf("%d",&num);
    int num1;
    printf("enter your second no");
    scanf("%d",&num1);
    int *ptr=&num;
    int *ptr1=&num1;
   int sum=*ptr+*ptr1;
   printf("%d",sum);

}