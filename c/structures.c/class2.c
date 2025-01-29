#include<stdio.h>
struct person {
    char name[100];
    int age;
    float height;
};
void print( struct person s1){
    printf(" %s\n%d\n,%f\n",s1.name,s1.age,s1.height);
}
struct person input(){
    struct person s1;
    printf("enter your name");
    fgets( s1.name,100,stdin);
    printf("enter your age");
     scanf("%d",&s1.age);
     printf("enter your height");
     scanf("%f",&s1.height);
   getchar();
      return s1;

}

int main(){
    
    struct person s1=input();
    struct person s2=input();
    print(s1);
    print(s2);
    
}




// #include <stdio.h>

// struct Person {
//     char name[50];
//     int rollNo;
//     float marks;
// };

// struct person input() {
//      struct person s;
//      fgets(s.name, sizeof(s.name),stdin);
//         getchar();
//      scanf("%d",&s.rollNo);
//      scanf("%f",&s.marks);
//      return s;
//  }
//  void print(struct person s){
//       printf("Name= %s  Roll=%d  Marks=%f\n", s.name, s.rollNo,s.marks);
//     }

// int main() {
// struct person s1=input();
// struct person s2=input();
    
//     print(s1);
//     print(s2);

//     return 0;
// }





