#include<stdio.h>
typedef struct area{
    int length;
    int breadth;

} area;
area input (){
    area a1;
   puts("enter your length");
   scanf("%d",&a1.length);
   puts("enter your breadth");
   scanf("%d",&a1.breadth);
   
   return a1;
}
void print(area a1){
    printf("area=%d",a1.length*a1.breadth);

}
int main(){
area a1=input(a1);
area a2= input (a1);
  print(a1);
   print(a2); 
}