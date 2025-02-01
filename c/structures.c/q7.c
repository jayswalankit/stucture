#include<stdio.h>
#include<string.h>
typedef struct stuent{
    char name[100];
    int age;
    float percentage;

} student;
student s1;
int main(){
    puts("enter your name");
    fgets(s1.name,100,stdin);
    puts("enter your age");
    scanf("%d",&s1.age);
    puts("enter your pergentage");
    scanf("%f",&s1.percentage);
   
    
    printf("name=%s",s1.name);
    printf("age=%d\n",s1.age);
    printf("percentage=%f\n",s1.percentage);
    
}

