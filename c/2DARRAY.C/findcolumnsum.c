#include<stdio.h>
int main(){
int r,c;
printf("enter your size");
scanf("%d%d",&r,&c);
int num[r][c],sum=00;
printf("enter your element");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&num[i][j]);
     }
}
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
       
        printf("%d ",num[i][j]);
       
     }
     printf("\n");
}


    for(int i=0;i<r;i++){
     
        sum+=num[i][2];
                 
        
     }


printf("%d\n",sum);
for(int i=0;i<r;i++){
    //for(int j=0;j<c;j++){
       
        printf("%d ",num[i][2]);
       
     

     printf("\n");
}
}

// AGAR LAST LOOP KA INT J WALA KA COMMENT HATATE HAI TO PRINTF J WALE LOOP KE BAHAR \N KE UPAR HOGA....


      