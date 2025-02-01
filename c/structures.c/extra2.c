#include<stdio.h>
#include<string.h>
typedef struct book{
    char title[100];
    char author_name[100];
    float price;
} book;


int main(){
    int n;
    printf("enter your size");
    scanf("%d",&n);
    book b1[n];
    for(int i=0;i<n;i++){
        getchar();
    puts("enter your title");
    fgets(b1[i].title,100,stdin);
    b1[i].title[strcspn(b1[i].title, "\n")] = '\0';
    puts("enter your author name");
    fgets(b1[i].author_name,100,stdin);
    b1[i].author_name[strcspn(b1[i].author_name, "\n")] = '\0'; 
    puts("enter your price");
   scanf("%f",&b1[i].price);
  
    }
    int max=0,flag=0;
    int i=0;
    for(;i<n;i++){
        
        printf("title=%s",b1[i].title);
        printf("author name=%s",b1[i].author_name);
        printf("price=%f",b1[i].price);
        if(b1[i].price>max){
            max=b1[i].price;
            flag=i;
        }
        
    }
    printf("detail of expensive");
    printf("title=%s",b1[flag].title);
        printf("author name=%s",b1[flag].author_name);
        printf("price=%f",b1[flag].price);
}