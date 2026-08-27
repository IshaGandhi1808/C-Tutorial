#include <stdio.h>

void square(int n);
void _square(int *n);

void swap(int a, int b);
void _swap(int *a, int *b);

void printAddress(int n9);
void _printAddress(int *n9);

void doWrok(int a, int b, int *sum, int *product, float *average);

int main() {
    
    int age = 18;
    int *ptr = &age; // &age ==> address of age , pointer -----> *ptr ==> variable that store address of another variable (age) 
    int _age = *ptr;  // *ptr ==> value of store address

    /*
    
          age       ptr         _age
        |-----|   |-------|   |------| 
        |  18 |   | 1001  |   | 1005 | 
        |-----|   |-------|   |------| 
           |          |     
address   1001       1005

    */

    // use %p for pointer ( %p ==> hexacode / %u ==> integer)

    // address 

    printf("&age = %p \n", &age);  // 1001
    printf("ptr = %p \n", ptr);    // 1001
    printf("&ptr = %p \n", &ptr);  // 1005

    printf("&age = %u \n", &age);  // 1001
    printf("ptr = %u \n", ptr);    // 1001
    printf("&ptr = %u \n", &ptr);  // 1005

    // data 

    printf("age = %d \n", age); // 18
    printf("*ptr = %d \n", *ptr); // 18
    printf("*(&age) = %d \n", *(&age)); // 18

    int n = 4;

    // call by value 

    square(n);
    
    printf("(call by value) n is %d \n", n); // n = 4

    // call by reference

    _square(&n);

    printf("(call by reference) n is %d \n", n); // n = 16

    // Q 38 : ============ swap two numbers ==========

    int a = 2;
    int b = 4;

    // call by value 

    swap(a, b);

    printf("(call by value) a = %d , b = %d \n", a, b); // a = 2, b = 4
    
    // call by reference 
    
    _swap(&a, &b);
    
    printf("(call by reference) a = %d , b = %d \n", a, b); // a= 4, b = 2

    /*
    
    Q 36 : find output
    
    */

    int *ptr1;
    int x;

    ptr1 = &x;
    *ptr1 = 0;

    printf("x = %d \n", x);     // 0
    printf("*ptr = %d \n", *ptr1);   // 0
    
    *ptr1 += 5;
    
    printf("x = %d \n", x);     // 5
    printf("*ptr = %d \n", *ptr1);   // 5
    
    (*ptr1)++;

    printf("x = %d \n", x);     // 6
    printf("*ptr = %d \n", *ptr1);   // 6

    // Pointer to pointer : A Variable that store the memory address of another pointer 
    
    /*
    
          age       ptr         pptr
        |-----|   |-------|   |------| 
        |  20 |   | 1001  |   | 1005 | 
        |-----|   |-------|   |------| 
           |          |           |
address   1001       1005       1003

    Syntax :

    int **pptr;
    char **pptr;
    float **pptr;

    */

    float price = 100.00;
    float *ptr2 = &price;
    float **pptr2 = &ptr2;

    // Q 37 : print the value of 'i' from its pointer to pointer 

    int i = 5;
    int *ptr3 = &i;
    int **pptr3 = &ptr3;

    printf("**pptr = %d \n", **pptr3);

    // Q 39 : Will the address output be same?  ans : No [Call by value]

    int n9 = 4;

    printf("%u \n", &n9);    // 1002
    printAddress(n9);

    
    // Call by refrence 

    _printAddress(&n9);
    printf("%u \n", &n9);    // 1002

    // Q 40 : Write a function to calculate the sum, product & average of 2 numbers. Print that average in the main function

    int a1 = 5;
    int a2 = 3;
    int sum, product;
    float average;

    doWrok(a1, a2, &sum, &product, &average);

    printf("Sum = %d \t Product = %d \t Average = %.2f \n", sum, product, average);

    // ============== Practice Questions ============

    // WAP in C to find the maximum number between two numbers using a pointer 

    int x1 = 3;
    int y1 = 1;
    
    int *xptr1 = &x1;
    int *yptr1 = &y1;

    if (*xptr1 > *yptr1) {
        printf("%d is Big \n", *xptr1);
    } else {
        printf("%d is Big \n", *yptr1);
    }

    // WAP in C to print all the letters in english alphabet using a pointer 

    char ch1;
    char *iptr = &ch1;

    for (*iptr = 'A'; *iptr <= 'Z'; (*iptr)++) {
        printf("%c ", *iptr);
    }

    printf("\n");
    
    return 0;
}


// Q 39 : Will the address output be same?

void printAddress(int n9) {
    printf("%u \n", &n9);   // 1004
}

// Call by refrence

void _printAddress(int *n9) {
    printf("%u \n", n9);   // 1002
}

// call by value

void square(int n) {
    n =  n * n;
    printf("(call by value) square is %d \n", n); 
}

// call by reference

void _square(int *n) {
    *n = *n * *n;
    printf("(call by reference) square is %d \n", *n);
}

// Q 38 : ============ swap two numbers ==========

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

void _swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Q 40 : Write a function to calculate the sum, product & average of 2 numbers. Print that average in the main function

void doWrok(int a, int b, int *sum, int *product, float *average) {
    *sum = a + b;
    *product = a * b;
    *average = (a + b)/2;
}