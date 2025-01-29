#include<stdio.h>
int main(){
    int s=22;
    int *ptr=&s;
    int _s=ptr;
    //*ptr=99; change value .....
    printf("%d=data\n",*ptr);
    printf("%d=data\n",*(&s));
    printf("%p= address in hexagonal form\n",ptr);
    printf("%p=address in hexagonal form\n",&ptr);
    printf("%u= address in integer\n",ptr);
    printf("%u= address in integer",&ptr);
    return 0;
}