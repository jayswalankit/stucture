#include<stdio.h>
typedef struct student{
    char name[15];
    int rollnumber;
    int marks[];
}s;
int main(){
    int n;
    int temp;
    printf("entr the number of student:");
    scanf("%d",&n);
    s arr[n];
    for(int i=0;i<n;i++){
           getchar(); 
        printf("enter the name of student:"); 
        fgets(arr[i].name,15,stdin);
 

        printf("enter the roll number:");
        scanf("%d",&arr[i].rollnumber);

        printf("enter the marks:");
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i].marks[j]);
        }
     
      
        
    }

    for(int i=0;i<n;i++){
        printf("%s:",arr[i].name);
        printf("%d\n",arr[i].rollnumber);

        for(int j=0;j<5;j++){
            for(int k=j+1;k<5;k++){
                if(arr[i].marks[j]<arr[i].marks[k]){
                    temp=arr[i].marks[j];
                    arr[i].marks[j]=arr[i].marks[k];
                    arr[i].marks[k]=temp;

                }
                // printf("%d\n",arr[i].marks[j]);
            }
             printf("%d\n",arr[i].marks[j]);
        }
        }

}