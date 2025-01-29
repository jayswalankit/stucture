#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
} ;


int main(){


    struct student ece[5];
   for (int i=0;i<3;i++){
    printf("student data=%d\n",i+1);
    printf("enter the rollno:");
    scanf("%d",&ece[i].roll);
    printf("enter the cgpa:");
    scanf("%f",&ece[i].cgpa);
    printf("enter the name of character:");
    scanf("%s",ece[i].name);
   }
   for (int i=0;i<3;i++){
    printf("%d\n",ece[i].roll);
    printf("%f\n",ece[i].cgpa);
    printf("%s\n",ece[i].name);
   }

    
}




// #include<stdio.h>
// #include<string.h>
// int main(){
// typedef struct cricket{
//   char name [10];
//   int age;
//   int testmaches;
//   float averagerun;
// }cricket ;
// cricket arr[10];
// for (int i = 0; i < 3; i++)
// {
//     printf("enter the name of character:");
//     fgets(arr[i].name ,sizeof(arr[i].name),stdin);
//     arr[i].name[strcspn(arr[i].name, "\n")] = '\0';
//     printf("enter the age of the player:");
//     scanf("%d",&arr[i].age);
//     printf("enter the player test matches played:");
//     scanf("%d",&arr[i].testmaches);
//     printf("enter the average run in matches:");
//     scanf("%f",&arr[i].averagerun);
//   while (getchar() != '\n');

// }

// for (int i = 0; i < 3; i++)
// {
   
//     printf("%s\n",arr[i].name);
//     printf("%d\n",arr[i].age);
    
//     printf("%f\n",arr[i].testmaches);

//     printf("%f\n",arr[i].averagerun);


// }


// }





