#include<stdio.h>
typedef union var{
    int a;
    char b[100];
    float c;

} var ;
var v1;
int main(){
    printf("enter your no");
    scanf("%d",&v1.a);
    printf("%d",v1.a);
    getchar();
    puts("enter your name");
    fgets(v1.b,100,stdin);
    
    printf("%s",v1.b);
    puts("enter your decimal value");
    scanf("%f",&v1.c);
    printf("%0.2f",v1.c);
    

}