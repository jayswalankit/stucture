#include<stdio.h>
typedef struct students{
    char name[100];
    int rollno;
    float marks;
}students;
students s1[5];
int main(){
    
    for(int i=0;i<5;i++){
     puts("enter your name");
     fgets(s1[i].name,100,stdin);
     printf("enter your rollno");
     scanf("%d",&s1[i].rollno);
     printf("enter youur marks");
     scanf("%f",&s1[i].marks);
     getchar();
    }
    for(int i=0;i<5;i++){
        printf("NAME=%s,ROLLNO=%d,MARKS=%f",s1[i].name,s1[i].rollno,s1[i].marks);
    }
}