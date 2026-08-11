#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

// typedef keyword  ====> Used to create alies for data types 

typedef struct ComputerEngineeringStudent {
    char name[100];
    int roll;
    float cgpa;
} ce;

void printInfo(struct student s1);

int main() {

    // assign values one by one 

    struct student s1;

    s1.roll = 123;
    s1.cgpa = 9.8;
    strcpy(s1.name, "Isha");

    printf("Student 1 roll Number : %d \n", s1.roll);
    printf("Student 1 CGPA : %f \n", s1.cgpa);
    printf("Student 1 Name : %s \n", s1.name);

    // assign values at declaration

    struct student s2 = {124, 9.7, "Smit"};

    printf("Student 2 roll Number : %d \n", s2.roll);
    printf("Student 2 CGPA: %f \n", s2.cgpa);
    printf("Student 2 Name : %s \n", s2.name);

    struct student s3 = {0}; // assign all values NULL

    // array of structures

    struct student IT[100];
    struct student ECE[100];
    struct student CE[100];

    IT[0].roll = 101;
    IT[0].cgpa = 9.89;
    strcpy(IT[0].name, "Tina");

    IT[1].roll = 102;
    IT[1].cgpa = 9.74;
    strcpy(IT[1].name, "Meena");
    
    printf("IT student 1 Roll Number : %d \n", IT[0].roll);
    printf("IT student 1 CGPA : %f \n", IT[0].cgpa);
    printf("IT student 1 Name : %s \n", IT[0].name);
    
    printf("IT student 2 Roll Number : %d \n", IT[1].roll);
    printf("IT student 2 CGPA : %f \n", IT[1].cgpa);
    printf("IT student 2 Name : %s \n", IT[1].name);

    // Pointers to Structures

    struct student s4;
    struct student *ptr = &s4;    
    
    s4.roll = 121;
    printf("Student 4 Roll Number : %d \n", (*ptr).roll);
    printf("Student 4 Roll Number : %d \n", ptr->roll);  // short form of (*ptr).roll = ptr->roll

    strcpy(s4.name, "Geeta");
    printf("Student 4 Name : %s \n", ptr->name);

    // Passing structure to Function

    printInfo(s1); // structure pass call by value 

    // typedef keyword
    
    ce c1 = {"Isha", 101, 9.9};

    printf("Computer Engineering Student Name : %s \n", c1.name);
    printf("Computer Engineering Roll No. : %d \n", c1.roll);
    printf("Computer Engineering CGPA : %f \n", c1.cgpa);

    return 0;
}

// Passing structure to Function

void printInfo(struct student s1) {
    printf("s1 Name : %s \n", s1.name);
    printf("s1 Name : %d \n", s1.roll);
    printf("s1 Name : %f \n", s1.cgpa);

    s1.roll = 100; // No change // structure pass call by value 
}