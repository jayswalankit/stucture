#include<stdio.h>
typedef struct employes{
    char name[100];
    int id;
    float salary;
} employes;
employes input(){
    employes e1;
    puts("enter your name");
    fgets(e1.name,100,stdin);
   
    puts("enter your id");
    scanf("%d",&e1.id);
    puts("enter your salary");
    scanf("%d",&e1.salary);
     getchar();
}
void print(employes e1){
    printf("NAME=%s,ID=%d,SALARY=%f",e1.name,e1.id,e1.salary);
}
int main(){
  employes e1;
    employes e=input(e1);
    employes e2=input(e1);
     employes e3=input(e1);
}



