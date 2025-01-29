#include<stdio.h>
typedef union model{
    char bike[100];
    char car[100];
    char truck[100];

} model;
 model m1;
int main(){
   puts("enter your bike model name");
   fgets(m1.bike,100,stdin);
   
   puts("enter your car model name");
   fgets(m1.car,100,stdin);
   
   puts("enter your truck model name");
   fgets(m1.truck,100,stdin);
  

    printf("truck=%s\n",m1.truck);
    printf("bike=%s\n",m1.bike);
     prntf("car=%s\n",m1.car);



}