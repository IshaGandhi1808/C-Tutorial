#include <stdio.h>

void square(int n);
void _square(int *n);

void swap(int a, int b);
void _swap(int *a, int *b);

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

    // ============ swap two numbers ==========

    int a = 2;
    int b = 4;

    // call by value 

    swap(a, b);

    printf("(call by value) a = %d , b = %d \n", a, b); // a = 2, b = 4
    
    // call by reference 
    
    _swap(&a, &b);
    
    printf("(call by reference) a = %d , b = %d \n", a, b); // a= 4, b = 2

    return 0;
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

// ============ swap two numbers ==========

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