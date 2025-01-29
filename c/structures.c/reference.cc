#include<stdio.h>
typedef struct student{
    
    int rollno;
    

} student;
student s1;
 
 student input(){
   
    printf("enter your rollno");
    scanf("%d",&s1.rollno);
    student *ptr=&s1;
    (*ptr).rollno=56;
    return s1;
 }
 void print(student s1){
    
    printf("%d",s1.rollno);
 
 }
 int main(){
    
    student w=input();
    print(w);
 }

//  #include<stdio.h>
// typedef struct student{
//     int id ;
//     int roll;
// }s;
// s s1;
// s change(){
// s *ptr = &s1;
// (*ptr).roll = 20;
// (*ptr).id =40;
// return (s1);
// }
// void print(s s1){
//     printf("%d",s1.id);
//         printf("%d",s1.roll);

// }

// int  main(){
// s1.id=12;
// s1.roll =13333;

// s d= change(d);
// print(d);
// }