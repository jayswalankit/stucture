#include<stdio.h>
int main(){
 int r=2,c=3,equal=1;
int arr[r][c],arr1[r][c];
printf("enter your no");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
}
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr1[i][j]);
    }
}
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
       if(arr[i][j]!=arr1[i][j]){
        equal=0;
        break;
       }
       
    }
   

    
}
if(equal==0){
    printf("no");
}
else{
    printf("yes");
}

}




