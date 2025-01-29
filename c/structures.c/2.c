#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
} ;

int main(){

    struct student ece[50];

    struct student mec[50];

    struct student cse[50];

    ece[0].roll;
    printf("enter your rollno");
    scanf("%d",&ece[0].roll);

    ece[0].cgpa;
    puts("enter your cgpa");
    scanf("%f",&ece[0].cgpa);

    strcpy(ece[0].name,"ankit");


    printf("%d=rollno",ece[0]);

    ece[1].roll;
    printf("enter your rollno");
    scanf("%d",&ece[1].roll);

    ece[1].cgpa;
    puts("enter your cgpa");
    scanf("%f",&ece[1].cgpa);

    strcpy(ece[1].name,"ankit");


    printf("%d=rollno",ece[1]);


cse[0].roll;
    printf("enter your rollno");
    scanf("%d",&cse[0].roll);

    cse[0].cgpa;
    puts("enter your cgpa");
    scanf("%f",&cse[0].cgpa);

    strcpy(cse[0].name,"ankit");


    printf("%d=rollno",cse[0]);

    cse[1].roll;
    printf("enter your rollno");
    scanf("%d",&cse[1].roll);

    cse[1].cgpa;
    puts("enter your cgpa");
    scanf("%f",&cse[1].cgpa);

    strcpy(cse[1].name,"ankit");


    printf("%d=rollno",cse[1]);

}

