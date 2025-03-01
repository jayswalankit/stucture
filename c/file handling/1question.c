#include<stdio.h>
int main(){
   int n;
    printf("enter your ssize");
    scanf("%d",&n);
    getchar();

FILE*file=fopen("output.txt","w");

char str[n]; 
puts("enter your institute name");
    fgets(str,n,stdin);
 fputs(str,file);

}
