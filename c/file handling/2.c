#include<stdio.h>
int main(){
//     FILE*file=fopen("2.txt","w");
//    for(int i=0;i<3;i++){
//     fputc('a',file);
//     fputc('b',file);
//     fputc('c',file);
//    
// FILE*file=fopen("2.txt","w");
// for(int i=0;i<3;i++){
// fputs("ankit jayswal\n",file);
// }
// }

// FILE*file=fopen("2.txt","w");
// fputs("ankit jayswal\n",file);
// }

// FILE*file=fopen("2.txt","w");
// char a='a';
// fputc(a,file);
// FILE*file=fopen("2.txt","w");
// char str[40]="ankit kumar jayswal";
// fputs(str,file);

// FILE*ayush=fopen("2.txt","w");
// int a=12;char s='b'; char str[20]="AYUSH ";float c=12.5;
// fprintf( ayush,"%d %c %s %f",a,s,str,c);

// read use

FILE*file=fopen("1st.txt","r");
char a;
// while((a=fgetc(file))!=EOF){
// printf("%c",a);}
while((a = fgetc(file)) != EOF) {
    printf("%c ", a);
}


// FILE*file=fopen("2.txt","r");
// char str[100];
// while(fgets(str,sizeof(str),file))
// printf("%s",str);

fclose(file);
}