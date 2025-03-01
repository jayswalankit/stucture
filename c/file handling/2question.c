// #include<stdio.h>
// int main(){
//     FILE*file=fopen("output.txt","r");
    // char a;
    // while((a=fgetc(file))!=EOF){
    // printf("%c",a);
    // }
    // fclose(file);

    // FILE*file=fopen("output.txt","r");
    // char b;
    // while((b=fgetc(file))!=EOF){
    // printf("%c",b);
    // }
//     char str[100];

//     while(fgets(str,sizeof(str),file)){
//         // printf("%s",str);
//         fputs(str,file);
//     }

    
// }






#include<stdio.h>
int main(){
FILE *ptr = fopen("input.txt","w");
char ch[100] = "ayush";

    fputs(ch,ptr);

fclose(ptr);
ptr = fopen("input.txt","r");
char ch1[100] ;
while (fgets(ch,sizeof(ch1),ptr)){
   printf("%s",ch);
}


}
