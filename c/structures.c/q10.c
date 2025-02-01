#include<stdio.h>
#include<string.h>
typedef struct student{
    char name[100];
    int rollno;
    float marks[5];

} student;
student s1;
int main(){
    puts("enter your name");
    fgets(s1.name,100,stdin);
    puts("enter your rollno");
    scanf("%d",&s1.name);
    puts("enter your marks");
    for(int i=0;i<5;i++){
        scanf("%f",&s1.marks[i]);
    }
    getchar();
    printf("name=%s",s1.name);
    printf("roll no=%d\n,",s1.rollno);
    int max=0;
     float sum=0;
     float average=0;
    for(int i=0;i<5;i++){
        printf("marks=%f\n",s1.marks[i]);
        sum+=s1.marks[i];
        average=sum/5;
        if(s1.marks[i]>max){
            s1.marks[i]=max;
        }
       
        
    }
    printf(" highest=%f",s1.marks);
    printf("total=%f",sum);
    printf("average=%f",average);
}





