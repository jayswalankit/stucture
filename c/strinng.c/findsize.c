#include<stdio.h>
int main(){
char size[1000];
puts("enter your no");
fgets(size,1000,stdin);
int count =0;
puts(size);
for(int i=0;size[i]!='\0';i++){
      
  count++;

}
 count--;
printf("%d=size of string ",count++);
}

