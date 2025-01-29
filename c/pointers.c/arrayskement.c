// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter your size");
//     scanf("%d",&n);
//     int arr[n];
//     int *ptr=&arr[0];

//     for (int i=0;i<n;i++){
//         scanf("%d",(ptr+i));
//     }
//     printf("output");
//     for(int i=0;i<n;i++){
        
//       printf("%d\n",*(ptr+i));
//     }
//     printf("%p=single element address\n",(ptr+3));
// }
// // * ka presences hai to address show karega nhi to nhi %d & %u se koi mtlb nhi....
// // agar %p hua to hexadecimal dega...


#include<stdio.h>
int main(){
    int n;
    printf("enter your size");
    scanf("%d",&n);
    int arr[n];
    int *ptr=&arr[0];

    for (int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    printf("output");
    for(int i=0;i<n;i++){
        
      printf("%d\n",*(ptr+i));
    }
}