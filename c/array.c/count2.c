#include<stdio.h>
void main(){
    int n;
    printf("enter your elements");
    scanf("%d",&n);
int num[n];
printf("enter your no");
for(int i=0;i<n;i++){
    scanf("%d",&num[i]);
}
int count1=0,count2=0;
for(int i=0;i<n;i++){
    if(num[i]>0){
       
        count1++;
    }
    
    
    
}

for(int i=0;i<n;i++){
    if(num[i]<0){
        
        count2++; 
    }
   
    
    
}
printf("%d=positive\n",count1);
 printf("%d=negative\n",count2);
 

}