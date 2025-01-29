#include<stdio.h>
typedef struct students{
    char name[100];
    int rollno;
    float marks;

} students;
students input(){
    students s1;
    puts("enter your name");
    fgets(s1.name,100,stdin);
    puts("enter your roll no");
    scanf("%d",&s1.rollno);
    puts("enter your marks");
    scanf("%f",&s1.marks);
    getchar();
    return s1;
}
void print(students s1){
printf("NAME=%s,ROLL NO=%d,MARKS=%f",s1.name,s1.rollno,s1.marks);
}
int main(){
    students s1=input(s1);
    students s2=input(s1);
    print(s1);
    print(s2);
}