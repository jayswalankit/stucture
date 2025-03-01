#include<stdio.h>
int main(){
  FILE *file=fopen("1st.txt","r");
// FILE *file=fopen("3st.txt","a"); r=e=read,w=write;
// FILE*file=fopen("2nd.txt","r"); a=append

// fputc('a',file);
// char a='z';
// char str[100]="ankit jayswal";
// fputs(str,file);

// int a=10;
// float b=10.5;
// char c='Z';
// char str[100]="ANKIT JAYSWAL" ;
// fprintf(file,"a=%d f=%f c=%c str=%s",a,b,c,str);
 char  c=fgetc(file);




fclose(file);

}