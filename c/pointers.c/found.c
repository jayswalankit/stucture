#include <stdio.h>
int main()
{

    int available = 0;

    int n;
    printf("enter your size ");
    scanf("%d", &n);

    int a;
    printf("enter the number you want to check");
    scanf("%d", &a);

    printf("enter your element\n");

    int arr[n];
    int *ptr = &arr[0];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {

        if (*(ptr + i) == a)
        {
            // if(ptr[i]==a){
            // if(i==a){
            available = 1;
        }

    }
    
    if (available == 1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}