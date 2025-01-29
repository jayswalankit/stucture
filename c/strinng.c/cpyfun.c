#include<stdio.h>
#include<string.h>
int main(){
char str[1000];
char str1[1000];
puts("enter your string");
fgets(str,1000,stdin);
puts("enter your string");
fgets(str1,1000,stdin);

strcpy(str1,str);
puts(str);
puts(str1);
}