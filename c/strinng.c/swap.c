#include <stdio.h>
int main()
{
    char copy[1000];
    puts("enter your string");
    fgets(copy, 1000, stdin);

    char copy1[1000];
    
    puts("enter your string");
    fgets(copy1, 1000, stdin);

      int size=0;
      int a=0,b=0,c=0;
      
      for(int i=0;copy[i]&&copy1[i];i++){
      if(copy>copy1){
           size=a;
           a++;
      }
      else if(copy==copy1){
        size=b;
        b++;
      }
      else{
      size=c;
      c++;
      }
      printf("%d",size);
      }
        
       int temp ;
    for (int i = 0; i < size ; i++)
    {
      
        temp = copy[i];
        copy[i] = copy1[i];
        copy1[i] = temp;
        
    }

    printf("%s", copy);
    printf("%s", copy1);

    return 0;

}

// #include <stdio.h>
// int main()
// {
//     char copy[1000];
//     puts("enter your string");
//     fgets(copy, 1000, stdin);
//     char copy1[1000];
//     puts("enter your string");
//     fgets(copy1, 1000, stdin);

//     // int j=0;

//     for(int i=0;copy[i];i++){

//     }
//     return 0;
// }
/// minor misktake  sahi karwao
