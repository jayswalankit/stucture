#include<stdio.h>
int main(){

    char str[1000];
    printf("enter your string");
    fgets(str,1000,stdin);

int count=0,count1=0,count2=0;

    for(int i=0;str[i];i++){
       if(str[i]>='a'&&str[i]<='z'){
             count++;
       }

       else if(str[i]>='0'&&str[i]<='9'){
        count1++;
       }

       else{
        count2++;
       }

}
printf("%d=alphabet\n",count);
printf("%d=num\n",count1);
printf("%d=sc",count2-1);

}