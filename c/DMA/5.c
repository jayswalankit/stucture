// // study about dma
// // study about all four
// //how to create linklist
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int* arr=(int *)calloc(3,sizeof (int));
//     printf("enter your no");
//     for(int i=0;i<3;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<3;i++){
//         printf("%d",arr[i]);
//     }
//     int newsize=3+2;
// arr=(int*)realloc(arr,(newsize*sizeof (int)));
//      for(int i=3;i<newsize;i++){
//          printf("enter your no");
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<newsize;i++){
//         // printf("%d",arr[i]);
//          printf("%d",arr[i]);
        
//     }

// }

#include<stdio.h>
#include<stdlib.h>
 
 int main(){
    int* arr=(int*)calloc(5,sizeof(int));
     printf("enter your no");
    for(int i=0;i<5;i++){
        
        // scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        // printf("%d",arr[i]);
         printf("%d",arr[i]);
    }
 }
 // ptr== nul is why important check.... H.W.