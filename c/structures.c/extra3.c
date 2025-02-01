// #include<stdio.h>
// typedef  struct pointer{
//     int a;
//     int b;

// } pointer;
// pointer p1;
// int main(){
//     puts("enter your value 1 ");
//     scanf("%d",&p1.a);
//      puts("enter your value 2");
//     scanf("%d",&p1.b);
//     pointer *ptr=&p1;
//     (*ptr).a=5;
//     (*ptr).b=6;
//     printf("result=%p\n",p1.a);
//     printf("result%p",p1.b);
// }


#include<stdio.h>
typedef struct point{
    int x;
    int y;
}p;
p s1;
int main(){
printf("enter the x point:");
scanf("%d",&s1.x);
printf("enter the y point");
scanf("%d",&s1.y);

p *ptr = &s1;
(*ptr).x = 40;

(*ptr).y=50;

printf("%d\n",ptr->x);
printf("%d",ptr->y);
}