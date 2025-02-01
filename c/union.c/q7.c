#include<stdio.h>
typedef union shared_datd{
    int vat;
    float vat1;
} shared ;
int main(){
shared s1;
printf("enter your no");
scanf("%d",&s1.vat);
printf("enter your decimal value");
scanf("%f",&s1.vat1);
printf("%d\n",s1.vat);
printf("%0.2f",s1.vat1);
}