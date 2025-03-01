
#include<stdio.h>
#include<string.h>

int main()
{
    FILE *file=fopen("delete.txt", "w");

    char str[100];

    printf("Enter a string: ");
    fgets(str,100,stdin);

    fputs(str,file);

    fclose(file);

    FILE *file1=fopen("delete.txt","r");

    char del[100];
    printf("Enter a deletable word: ");
    scanf("%s",del);


    // printf("str=%s",str);
    char str2[100];

    while(fscanf(file1,"%s",str2)!=EOF){
        if(strcmp(str2,del)==0){
            continue;
        }
        printf("%s\n",str2);
    }

    // fscanf(file1,"%s",str2);
    // printf("%s",str2);

    // fscanf(file1,"%s",str2);
    // printf(" %s",str2);

    // fscanf(file1,"%s",str2);
    // printf(" %s",str2);
return 0;
}