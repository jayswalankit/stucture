#include<stdio.h>
#include<string.h>
typedef struct students{
    char name[100];
    int rollno;
    float marks;

}marks;
marks m1;

int main(){
 printf("enter your name");
 fgets(m1.name,100,stdin);
m1.name[strcspn(m1.name,"\n")]=0;
 puts("enter your rollno");
 scanf("%d",&m1.rollno);

 puts("enter your marks");
 scanf("%f",&m1.marks);

marks *ptr=&m1;
// strcpy(ptr->name,"ankit");
//(*ptr).rollno=67;
ptr->rollno=78;
 printf("%s\n",m1.name);
 printf("%d\n",m1.rollno);
 printf("%0.2f\n",m1.marks);
// printf("%u\n",m1.name);
//  printf("%u\n",m1.rollno);
//   printf("%u\n",m1.marks);
//   printf("%u\n",ptr);

}

