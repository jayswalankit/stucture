#include<stdio.h>
#include<string.h>
typedef struct students{
    char name[100];
    int rollno;
    float marks;
} students;

void s1input( students s1[],int n){
   for(int i=0;i<n;i++){
     getchar();
     printf("student =%d\n",i+1);
    printf("enter your name");
    
    fgets(s1[i].name,100,stdin);
   
    printf("enter your rollno");
    scanf("%d",&s1[i].rollno);
    printf("enter your marks");
    scanf("%f",&s1[i].marks);
    
   }
}
int main(){
    int n;
    printf("enter your size");
    scanf("%d",&n);
    students s1[n];
    s1input(s1, n);
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", s1[i].name);
        printf("Roll Number: %d\n", s1[i].rollno);
        printf("Marks: %.2f\n", s1[i].marks);
    }

   
    
}



