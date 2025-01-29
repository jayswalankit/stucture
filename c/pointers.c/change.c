 #include<stdio.h>
 #include<string.h>
 int main(){
     char str[1000];
     puts("enter your word");
  fgets(str,1000,stdin);

     char*ptr=&str[0];
     strcpy(ptr,"raja");
    
      puts(str);
 }