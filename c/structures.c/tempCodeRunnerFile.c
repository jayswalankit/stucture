  #include <stdio.h>
#include <string.h>

typedef struct student {
    int rollno;
    char name[100];
    float marks;
} stu;

stu s1;

int main() {
    printf("Enter your rollno: ");
    scanf("%d", &s1.rollno);
    getchar();  // Clearing the buffer

    puts("Enter your name: ");
    fgets(s1.name, 100, stdin);

    puts("Enter your marks: ");
    scanf("%f", &s1.marks);
    getchar();  // Clearing the buffer again

    char c;
    printf("Enter choose:\n a: old data\n b: new data\n");
    scanf(" %c", &c);  // Added a space before %c to ignore any whitespace

    switch(c) {
        case 'a':
            printf("%d\n", s1.rollno);
            printf("%s", s1.name);
            printf("%0.2f\n", s1.marks);
            break;
        case 'b':
            stu *ptr = &s1;
            stu **pptr = &ptr;
            strcpy((**pptr).name, "ankesh");
            (**pptr).rollno = 45;
            (**pptr).marks = 500;
            printf("%d\n", s1.rollno);
            printf("%s", s1.name);  // Removed extra newline
            printf("%0.2f\n", s1.marks);
            break;
        default:
            printf("Invalid choice.");
    }

    return 0;
}
