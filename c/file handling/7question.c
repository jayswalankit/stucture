#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE*file=fopen("5th.txt","r");
    if(file==NULL){
        printf(" 5th file not exit");
        exit(1);
    }
    FILE*file1=fopen("2.txt","r");
    if(file1==NULL){
        printf(" 2th file not exit");
        fclose(file);
        exit(1);
    }
    FILE*file2=fopen("7th.txt","w");
    if(file2==NULL){
        printf(" 7th file not exit");
        fclose(file);
        fclose(file1);
        exit(1);

    }
    char str[100];
    while(fgets(str,sizeof(str),file)){
        fputs(str,file2);
    }
    while(fgets(str,sizeof(str),file1)){
       fputs(str,file2);
    }
    fclose(file);
    fclose(file1);
    fclose(file2);
}







