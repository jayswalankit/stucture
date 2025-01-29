#include<stdio.h>
 typedef struct teacher{
    char name[100];
   int age;
   float salary
} teacher;
int main(){
    teacher t1;
    puts("enter your teacher name");
    fgets(t1.name,100,stdin);
    puts("enter your age");
    scanf("%d",&t1.age);
    puts("enter your salary");
    scanf("%f",&t1.salary);
    printf("NAME=%s,AGE=%d,SALARY=%f",t1.name,t1.age,t1.salary);

}