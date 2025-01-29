# include<stdio.h>
# include <string.h>
typedef struct student{
    int rollno;
    char name[100];
    float marks;

} stu;
stu s1;
int main(){
   
    printf("enter your rollno");
    scanf("%d",&s1.rollno);
    getchar();

    puts("enter your name");
    fgets(s1.name,100,stdin);
   
  
  puts("enter your marks");
  scanf("%f",&s1.marks);
 

   stu *ptr=&s1;
 stu**pptr=&ptr;
   char c;
   printf("enter choose \n a:old data\nb:new data\n");
   scanf(" %c",&c);

  switch(c){
    case 'a':
    printf("%d\n",s1.rollno);
 printf("%s\n",s1.name);
 printf("%0.2f\n",s1.marks);
 break;
 case 'b':
 
 strcpy((**pptr).name,"ankesh");
 (**pptr).rollno=45;
 (**pptr).marks=500;
  printf("%d\n",s1.rollno);
 printf("%s\n",s1.name);
 printf("%0.2f\n",s1.marks);
 break;
 default:
 printf("invalid");
  }
}








// #include<stdio.h>
// #include<string.h>
// typedef struct student{
//     char name [100];
//     int id ;
//     int roll ;
// } s;
// s s1;
// int main(){
// printf("enter ur name:");
// fgets(s1.name,100,stdin);
// printf("enter ur id");
// scanf("%d",&s1.id);
// printf("enter ur roll:");
// scanf("%d",&s1.roll);
// getchar();

// s *ptr = &s1;
// s**dblptr = &ptr;

// int a;
// printf("see profile => 1 \n");
// printf("change profile => 2");
// scanf("%d",&a);
// if(a ==1){
//     printf("%s\n",(**dblptr).name);
//     printf("%d\n",(**dblptr).id);
//     printf("%d\n",(**dblptr).roll);
// } 
// else if(a ==2){
//     printf("previous id:");
//      printf("%s\n",(**dblptr).name);
//     printf("%d\n",(**dblptr).id);
//     printf("%d\n",(**dblptr).roll);

//     printf("enter ur name u have to change :");
//     getchar();
//     fgets((**dblptr).name,100,stdin);
//     printf("enter ur new id:");
//     scanf("%d",&(**dblptr).id);
//     printf("enter ur roll:");
//     scanf("%d",&(**dblptr).roll);

//     printf("changed id");
//     printf("%s\n",(**dblptr).name);
//     printf("%d\n",(**dblptr).id);
//     printf("%d\n",(**dblptr).roll);

// }
// }