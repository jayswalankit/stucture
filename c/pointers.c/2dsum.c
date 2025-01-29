#include<stdio.h>
int main(){
    int r,c;
    printf("enter your no");
    scanf("%d%d",&r,&c);
    int arr[r][c],sum=0;
    int *ptr=&arr[0][0];
    printf("enter your no");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",(ptr+i*c+j));
        }
    }
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",*(ptr+i*c+j));
            sum+=*(ptr+i*c+j);

    }
    printf("\n");
    }

printf("%d",sum);
}



// #include<stdio.h>
// int main(){
//     int r,c;
//     printf("enter your size");
//     scanf("%d%d",&r,&c);
//     int arr[r][c],sum=0;
//     int (*ptr)[c]=&arr[0][0];
//     printf("enter your no");
//     for(int i=0;i<r;i++){
//          for(int j=0;j<c;j++){
//        scanf("%d",&ptr[i][j]);
//     }

//     }
//       for(int i=0;i<r;i++){
//          for(int j=0;j<c;j++){
//       sum+=ptr[i][j];
//     }

//     }
//     printf("%d ",sum);

// }