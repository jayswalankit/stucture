#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE*file=fopen("5th.txt","w");
    if(file==NULL){
        printf("file not exist");
        exit(1);
    }
    char str[100]="c is fun\n ayush loves ashika";
      fputs(str,file);
      fclose(file);

}