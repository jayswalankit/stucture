




#include <stdio.h>
int main()
{
   int r, c;
   printf("enter your no");
   scanf("%d%d", &r, &c);
   int num[r][c];
   int count = 0,a,repeat=0;
   printf("enter your no");
   for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            scanf("%d", &num[i][j]);
    }
   for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
         count=0;
            for (int k = 0; k < r; k++)
            {
                for (int l = 0; l < c; l++)
                {
                    if (num[k][l] == num[i][j])
                    {
                        count++;
                        a=num[k][l];

                    }
                }
            }
       }
       if(count>0){
          repeat=1;
          break;
       }
       else{
         repeat=0;
       }
    }
    if(repeat==1){
         printf("%d=no\n",a);
         printf("%d=count",count);
     }
     else{
         printf("no\n");
    
     }
     
 return 0;
}