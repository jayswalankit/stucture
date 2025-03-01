#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
 
    FILE*file=fopen("output.txt","a");
   if(file==NULL){
    printf("file not exist");
    exit(1);
   }
//    fprintf(file,"c is fun\n");
//    fclose(file);
//    file=fopen("output.txt","r");
//    if(file==NULL){
//     printf("file not exist");
//     exit(1);
//    }
//    char a;
//    while((a=fgetc(file))!=EOF){
//     printf("%c",a);
//    }
//    fclose(file);
char str1[100];
puts("enter your new message");
fgets(str1,100,stdin);
   fputs(str1,file);
   fclose(file);
file=fopen("output.txt","r");
if(file==NULL){
    printf("file not exixt");
}
char str[100];
while(fgets(str,sizeof(str),file))
printf("%s",str);

fclose(file);
}
