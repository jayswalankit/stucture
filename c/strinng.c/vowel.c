#include<stdio.h>
int main(){
 char str[1000];
 puts("enter your string");
 fgets(str,1000,stdin);
  int count=0;
 for(int i=0;str[i]!='\0';i++){
  if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
       count++;
       printf("%d\n",i);
  }
    

 }
 printf("%d=times that vowels letters appear",count);
}