#include<stdio.h>
int main(){
    char str[1000];
    puts("enter your no");
    fgets(str,1000,stdin);
    char*ptr=&str[0];
    int size=0;
    for(int k=0;ptr[k];k++){
        size++;
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            char temp=*(ptr+i);
            *(ptr+i)=*(ptr+j);
            *(ptr+j)=temp;
             
        }
        
    }
   puts(str);
}