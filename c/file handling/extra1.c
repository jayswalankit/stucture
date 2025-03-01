#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student
{
    char name[100];
    int rollno;
    float marks;

} stu;
stu s1;
int main()
{
    FILE *file = fopen("student.txt", "w");
    if (file == NULL)
    {
        printf("file not exist");
        exit(1);
    }
    puts("enter your name");
    fgets(s1.name, 100, stdin);

    printf("enter your rollno");
    scanf("%d", &s1.rollno);

    printf("enter your marks");
    scanf("%f", &s1.marks);

    fprintf(file, "%s\n %d %.2f\n", s1.name, s1.rollno, s1.marks);
    fclose(file);

    file = fopen("student.txt", "r");
    if (file == NULL)
    {
        printf("not exist");
        exit(1);
    }
    char find[100];
    int found = 0;
    while (fgets(find, 100, file))
    {
        find[strcspn(find, "\n")] = '\0';

        if (strcmp(find, "ankit") == 0)
        {
            found = 1;
        
        }
        
    }
    fclose(file);
    if (found == 1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
