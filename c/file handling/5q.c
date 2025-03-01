#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE*file=fopen("5th.txt","r");
    if(file==NULL){
        printf("file not exist");
        exit(1);
    }
    char str1[100];
    while(fgets(str1,sizeof(str1),file)){
     printf("%s",str1);
      
    }
    fclose(file);
}