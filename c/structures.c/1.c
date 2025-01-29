#include <stdio.h>

#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};
struct student s1,s2,s3;

int main()
{
    // struct student s1={123,98.765,"ankit"};
    // printf("student roll no=%d,student cgpa=%.2f,student name=%s",s1.roll,s1.cgpa,s1.name);
    struct student s1;

    s1.roll;
    printf("enter your rollno");
    scanf("%d", &s1.roll);

    s1.cgpa;
    printf("enter your cgpa");
    scanf("%f", &s1.cgpa);

    strcpy(s1.name, "ankit");

    printf("%d=rollno\n", s1.roll);
    printf("%f=cgpa\n", s1.cgpa);
    puts(s1.name);

    puts("2nd student info");

    struct student s2;

    s2.roll;
    printf("enter your rollno");
    scanf("%d", &s2.roll);

    s2.cgpa;
    printf("enter your cgpa");
    scanf("%f", &s2.cgpa);

    // puts("enter your name");
    // scanf("%s",s2.name);
    strcpy(s2.name, "arya");
    printf("%s", s2.name);
    
    
}