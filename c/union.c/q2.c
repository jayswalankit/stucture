#include<stdio.h>
typedef union data{

int a;
char b[100];
float c;
}   data;

int main(){
data d1;

puts("enter your no");
scanf("%d",&d1.a);
getchar();


puts("enter your name");
fgets(d1.b,100,stdin);

puts("enter your decimal");
scanf("%f",&d1.c);


//printf("name=%s\n",d1.b);
//printf("decimal=%.2f\n",d1.c);
printf("number=%d\n",d1.a);


}