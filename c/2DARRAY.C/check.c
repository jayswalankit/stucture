#include<stdio.h>
int main(){
 int r,c,found=0;
 printf("ente your no element");
 scanf("%d%d",&r,&c);
 int a;
printf("enter your a no");
scanf("%d",&a);
int arr[r][c];
printf("enter your no");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
}

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        
        if(a==arr[i][j]){
            found=1;
            printf("%d%d=index\n",i,j);
                   
        }
        
    }
    
}
if(found==1){
    printf("yes available");
}
else{
    printf("not");
}

}
