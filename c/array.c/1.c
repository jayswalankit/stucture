#include<stdio.h>
int main(){
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
printf("%d=even\n",sum);
 printf("%d=odd\n",add);
 printf("%d=evencount\n",count1);
 printf("%d=oddcount\n",count2);

}