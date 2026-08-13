#include <stdio.h>

int main() {

    FILE *fptr;

    // Make a program to read 5 integers from a file.

    fptr = fopen("Qs.txt", "r");

    int n;
    
    fscanf(fptr, "%d", &n);
    printf("%d \t", n);
    
    fscanf(fptr, "%d", &n);
    printf("%d \t", n);

    fscanf(fptr, "%d", &n);
    printf("%d \t", n);

    fscanf(fptr, "%d", &n);
    printf("%d \t", n);

    fscanf(fptr, "%d", &n);
    printf("%d \n", n);

    fclose(fptr);

    // WAP to write all the odd numbers from 1 to n in a file.

    int num;

    printf("Enter the Number : ");
    scanf("%d", &num);

    fptr = fopen("Qs.txt", "a");  //  fptr = fopen("Qs.txt", "w");

    fprintf(fptr, "\n");
    fprintf(fptr, "Odd Numbers \n");
    
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0) {
            fprintf(fptr, "%d \t", i);
        }
    }
    
    fprintf(fptr, "\n");
    
    fclose(fptr);

    // make a program to input student information from a user & enter it to a file. (info --> name, age, cgpa)
    
    char name[100];
    int age;
    float cgpa;

    printf("Student Name : ");
    scanf("%s", name);

    printf("Student Age : ");
    scanf("%d", &age);

    printf("Student CGPA : ");
    scanf("%f", &cgpa);

    fptr = fopen("Qs.txt", "a");  //  fptr = fopen("Qs.txt", "w");

    fprintf(fptr, " \n");
    fprintf(fptr, "Student Name : %s \n", name);
    fprintf(fptr, "Student Age : %d \n", age);
    fprintf(fptr, "Student CGPA : %f \n", cgpa);
    
    fclose(fptr);

    // 2 numbers - a & b , are writen in a file. Write a program to replace them their sum.

    fptr = fopen("New_Q.txt", "r");

    int a, b;

    fscanf(fptr, "%d", &a);
    printf("%d \n", a);   // 2
    
    fscanf(fptr, "%d", &b);
    printf("%d \n", b);   // 4 

    fclose(fptr);

    fptr = fopen("New_Q.txt", "w");

    fprintf(fptr, "%d", a + b);  

    fclose(fptr);

    return 0;
}