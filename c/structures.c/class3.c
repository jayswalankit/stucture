#include<stdio.h>
   struct student{
    char name[100];
     float marks;
     float average;
     int sum;

} ;


struct student input(){
 struct student s1;
 printf("Enter student name: ");
    scanf("%s", s1.name);
     printf("Enter your marks: ");
      s1.sum=0;
    for(int i=0;i<5;i++){
   
    scanf("%f", &s1.marks);
    s1.sum+=s1.marks;
    }
    
    s1.average=s1.sum/5;
    return s1;
 

}
void print(struct student s1){
    printf("%s=name,%f=average,%d=sum\n",s1.name,s1.average,s1.sum);
    


 }
int main(){
    struct  student s1=input();
    struct  student s2=input();
    struct  student s3=input();
    print(s1);
    print(s2);
    print(s3);
        
}

 //when declaring variable with structure
// #include<stdio.h>
//    struct student{
//     char name[100];
//      float marks;
//      float average;
//      int sum;

// } s1,s2,s3 ;


// struct student input(){

//  printf("Enter student name: ");
//     scanf("%s", s1.name);
//      printf("Enter your marks: ");
//       s1.sum=0;
//     for(int i=0;i<5;i++){
   
//     scanf("%f", &s1.marks);
//     s1.sum+=s1.marks;
//     }
    
//     s1.average=s1.sum/5;
//     return s1;
 

// }
// void print(struct student s1){
//     printf("%s=name,%f=average,%d=sum\n",s1.name,s1.average,s1.sum);
    


//  }
// int main(){
//      s1=input();
//     s2=input();
//     s3=input();
//     print(s1);
//     print(s2);
//     print(s3);
        
// }