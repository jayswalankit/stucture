#include<stdio.h>
#include<stdlib.h>
typedef struct student{
    char name[50];
    int rollno;
    float marks;
} stu;
stu s1[2];
int main(){
    FILE*file=fopen("2.txt","a");
    
    for(int i=0;i<2;i++){
        
        printf("enter youur name");
      fgets(s1[i].name,50,stdin);
      printf("ente ryour rollno");
      scanf("%d",&s1[i].rollno);
      printf("enter your marks");
      scanf("%f",&s1[i].marks);
      getchar();
      
      fprintf(file,"%s %d %f",s1[i].name,s1[i].rollno,s1[i].marks);
    }
fclose(file);
file=fopen("2.txt","r");
for(int i=0;i<2;i++){

    printf("%s %d %f\n",s1[i].name,s1[i].rollno,s1[i].marks);

}

}