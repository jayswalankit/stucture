#include<stdio.h>

struct person{
  
    char name[30];
      int age;
    
};

int main(){
    struct person p1={.name="ankit",.age=12};// to access randomly;;;
    struct person p2={"ankesh",11}; // to access randomly;;;

    // struct person p1={"ankit",12};
    // struct person p2={"ankesh",11};
    printf("%s,%d\n",p1.name,p1.age);
    printf("%s,%d",p2.name,p2.age);

    // p1.name;
    // printf("enter your name");
    // scanf("%s",&p1.name);
    // printf("enter your age");
    // scanf("%d",&p1.age);
    // printf("perrson name=%s\nperson age=%d",p1.name,p1.age);
}