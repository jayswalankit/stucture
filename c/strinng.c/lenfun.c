#include<stdio.h>
#include<string.h>
int main(){
char str[1000];
fgets(str,1000,stdin);

int size=strlen(str);
printf("%d",size-1);
}