// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter your size");
//     scanf("%d",&n);
//     int arr[n];
//     int *ptr=&arr[0];
//     for(int i=0;i<n;i++){
//         scanf("%d",(ptr+i));
//     }
//     for(int i=n-1;i>=0;i--){
//         printf("%d\n",*(ptr+i));
//     }
    
// }

#include<stdio.h>
int main(){
int n;
printf("enter your size");
scanf("%d",&n);
int arr[n];
int *ptr=&arr[0];
for(int i=0;i<n;i++){
    
   // scanf("%d",&ptr[i]);
    scanf("%d",(ptr+i));
}

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        int tem=*(ptr+i);
        *(ptr+i)=*(ptr+j);
        *(ptr+j)=tem;
    }
    printf("%d",*(ptr+i));
   // printf("%d",ptr[i]);
}

}
