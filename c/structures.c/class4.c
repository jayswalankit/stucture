#include<stdio.h>
typedef union student{
    int rollno;
    char name[100];
    
} stu;
int main(){
    stu s1;

     
       puts("enter your name");
    fgets(s1.name,100,stdin);
    puts("enter your rollno");
    scanf("%d",&s1.rollno);
    getchar();

     
    printf("rollno=%d\n",s1.rollno);
    printf("name=%s",s1.name);
    
  
}







