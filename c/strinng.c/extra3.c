#include<stdio.h>
#include<string.h>
typedef struct address{
    char city[100];
    char state[100];
    int pincode;
} add;
typedef struct employees{
    char name[100];
    int id;
    add a;
} employee;
employee e1;
int main(){
    printf("enter your name");
    e1.name[strcspn(e1.name,"\n")]='0';
    fgets(e1.name,100,stdin);
    puts("enter your id");
    scanf("%d",&e1.id);
    getchar();
    puts("enter your city");
      fgets(e1.a.city,100,stdin);
      e1.a.city[strcspn(e1.a.city,"\n")]='0';
    puts("enter your state");
    e1.a.state[strcspn(e1.a.state,"\n")]='0';
      fgets(e1.a.state,100,stdin);
      puts("enter your pincode");
      scanf("%d",&e1.a.pincode);
      printf("EMPLOYESS DETAILS----->\n");
     printf("Name: %s\n", e1.name);
    printf("ID: %d\n", e1.id);
    printf("City: %s\n", e1.a.city);
    printf("State: %s", e1.a.state);
    printf("Pincode: %d\n", e1.a.pincode);
}