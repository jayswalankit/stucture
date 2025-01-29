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
int sum=0,count1=0,count2=0;
for(int i=0;i<n;i++){
    if(num[i]%2==0){
        sum+=num[i];
        count1++;
    }
    
    
    
}
 int add=0;
for(int i=0;i<n;i++){
    if(num[i]%2!=0){
        add+=num[i];
        count2++; 
    }
   
    
    
}
printf("%d=even\n%d=evencount\n",sum,count1);
 printf("%d=odd\n%d=oddcount",add,count2);
 

}