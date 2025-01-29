#include<stdio.h>
typedef struct stu1{
    int rollno;
    int id;
} stu1;
typedef struct stu2{
    int marks; 
    stu1 a; 
} stu2;
stu2 b;
int main(){

b.a.rollno=10;
printf("%d",b.a.rollno);
}