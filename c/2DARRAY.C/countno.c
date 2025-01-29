#include<stdio.h>
int main(){
 int r=4,c=4;
int arr[r][c],count=0;
printf("enter your no");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
}
int a;
printf("enter your no");
scanf("%d",&a);
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        
        if(a==arr[i][j]){
            count++;
            printf("%d%d=index\n",i,j);
                   
        }
        
    }
    
}
if(count){
    printf("%d=count",count);
}
else{
    printf("not");
}

}
