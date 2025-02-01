#include<stdio.h>
typedef struct rectangle{
    int length ;
    int breadth;
} rectangle;
rectangle r1;
int main(){
    printf("enter your length");
    scanf("%d",&r1.length);
    printf("enter your breadth");
    scanf("%d",&r1.breadth);
    printf("area=%d\n",r1.length*r1.breadth);
    printf("perimeterr=%d\n",2*(r1.length+r1.breadth));
}