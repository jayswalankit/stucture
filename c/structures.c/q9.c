#include<stdio.h>
#include<string.h>
typedef struct employees{
    char name[100];
    int id;
    float salary;

} emp;
emp e1[3];
int main(){
    for(int i=0;i<3;i++){
    printf("enter your name");
    fgets(e1[i].name,100,stdin);
    printf("enter your id");
    scanf("%d",&e1[i].id);
    printf("enter your salary");
    scanf("%f",&e1[i].salary);
    getchar();
     
    }
    
    for(int i=0;i<3;i++){
        if(e1[i].salary >=25000){
     printf("name=%s",e1[i].name);
    printf("id=%d",e1[i].id);
    printf("salary=%f",e1[i].salary);
    }
    }
    printf("totl output");
    for(int i=0;i<3;i++){
    printf("name=%s",e1[i].name);
    printf("id=%d",e1[i].id);
    printf("salary=%f",e1[i].salary);
}
}