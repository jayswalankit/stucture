#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE*file=fopen("1st.txt","r");
    if(file==NULL){
        printf("1st.txt is not exist");
        exit(1);
    }
    FILE*file1=fopen("8.txt","w");
    if(file1==NULL){
        printf("8thh file not exist");
       
        exit(1);
    }
    char str[100];
    int size=0;
    
    while(fgets(str,sizeof(str),file)){
        for(int k=0;str[k]!='\0';k++){
            size++;
        }
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                int tem=str[i];
                str[i]=str[j];
                str[j]=tem;
            }
        }
        puts(str);
    }
//     for(int i=size-1;i>=0;i--){
//         fprintf(file1, "%c", str[i]);
//     }
    
//     fprintf(file1, "\n");
// }
}
