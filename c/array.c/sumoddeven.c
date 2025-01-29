#include<stdio.h>
int main(){
    int n;
    printf("enter your element");
    scanf("%d",&n);
     int num[n];
     printf("enter your no");
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int sum=0,add=0,count1=0,count2=0;
      for(int i=0;i<n;i++){
        int nm=num[i];
        if(nm%2==0){
        sum+=num[i];
        count1++;
        }
        else{
        add+=num[i];
        count2++;
      }
      }
      
      
     int avg1=sum/count1;
     int avg2=add/count2;
     printf("%d=evenavg\n",avg1);
     printf("%d=oddavg\n",avg2);
}