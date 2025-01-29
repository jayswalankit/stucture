# include<stdio.h>
typedef struct marks{
    char name[100];
    int marks[5];

} marks;
   marks m1;

 marks input(){
    
puts("enter your name");
fgets(m1.name,100,stdin);

printf("enter your marks");
for(int i=0;i<5;i++){
    scanf("%d",&m1.marks[i]);
}
getchar();
return m1;
 }
  void print(marks m1){
    printf("output=");
    printf("name=%s",m1.name);
    for(int i=0;i<5;i++){
    printf("%d\n",m1.marks[i]);
}
  }
  int main(){
    marks m;
    marks s0=input();
    marks s1=input();
    


    print(s0);
    print(s1);
    
  }






