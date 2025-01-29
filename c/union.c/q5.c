#include<stdio.h>
typedef  struct product{
    
    int id;
    char name[100];
}product;

typedef union prices{
    float price;
    float discountprice;
} prices;
int main(){
    product p1;
    prices p2;

printf("enter your id");
scanf("%d",&p1.id);
printf("id=%d",p1.id);
getchar();

printf("enter your name");
fgets(p1.name,100,stdin);
printf("name=%s",p1.name);

printf("enter your price");
scanf("%f",&p2.price);
printf("price=%f",p2.price);
printf("enter your discountprice");
scanf("%f",&p2.discountprice);



printf("discountprice=%f",p2.discountprice);


}

