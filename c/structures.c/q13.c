# include<stdio.h>
typedef struct person{
    char name[100];
    int age;
    char address[100];

} person;

void input( person p1[],int n){
    for(int i=0;i<n;i++){
        printf("person no%d\n",i+1);
     puts("enter your name");
     getchar();
     fgets(p1[i].name,100,stdin);
     puts("enter your age");
     scanf("%d",&p1[i].age);
     printf("enter your address");
     getchar();
     fgets(p1[i].address,100,stdin);
    }
}
    void print(person p1[],int n){
       int max=0,min=999,flag=0,flag1=0;
        for(int i=0;i<n;i++){
       if(max<p1[i].age){
        max= p1[i].age;
        flag=i;
       }
       if(min>p1[i].age){
        min=p1[i].age;
        flag1=i;
       }
       
        }
        printf("oldest");
          printf("name=%s",p1[flag].name);
       printf("age=%d\n",p1[flag].age);
       printf("address=%s",p1[flag].address);
     printf("youngest");
       printf("name=%s",p1[flag1].name);
       printf("age=%d\n",p1[flag1].age);
       printf("address=%s",p1[flag1].address);
    }


int main(){
    int n;
    printf("enter your size");
    scanf("%d",&n);
    person p1[n];
    input(p1,n);
    print(p1,n);

}





