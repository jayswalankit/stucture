#include<stdio.h>
#include<stdlib.h>
int main(){
 FILE*file=fopen("5th.txt","r");
 if(file==NULL){
    printf("file not exist");
    exit(1);
}

    FILE*file1=fopen("6th.txt","w");
    if(file1==NULL){
        printf("file not exist");
        exit(1);
    }
    char str[100];
    while(fgets(str,sizeof(str),file)){
        fputs(str,file1);
    }
    fclose(file);
    fclose(file1);
}