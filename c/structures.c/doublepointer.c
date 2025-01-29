#include<stdio.h>
#include<string.h>
typedef struct student{
    int rollno;
    char name[100];
    float marks;

} student;
student s1;
int main(){
    printf("enter your rollno");
    scanf("%d",&s1.rollno);
   

    student *ptr=&s1;
    student **pptr=&ptr;
    // (**pptr).rollno=34;
    

    printf("%d",s1.rollno);
}