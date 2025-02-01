#include<stdio.h>
typedef union degree{
    float celsius;
    float farehite;

} degree;
degree d1;
int main(){
    printf("enter your celsius");
    scanf("%f",&d1.celsius);
    printf("enter your farehite");
    scanf("%f",&d1.farehite);
    int  a;
    printf("1=for  farehite,2=for degree");
    scanf("%d",&a);
if(a==1){
  d1.farehite=(d1.celsius*9/5)+32;
printf("%0.2f",d1.farehite);
}
else if(a==2){
    d1.celsius=(d1.farehite-32)*5/9;
    printf("%0.2f",d1.celsius);
}
 else{
    printf("invalid");
}
}
 