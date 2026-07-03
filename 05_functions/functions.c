#include <stdio.h>

void printHello();
int square(int n);
int sum(int n, int m);

int main() {

    // Print Hello function

    printHello();
    
    // function to calculate square of a number

    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    
    printf("Square of %d = %d \n", n, square(n));

    int a,b;

    printf("Enter the value of a = ");
    scanf("%d", &a);

    printf("Enter the value of b = ");
    scanf("%d", &b);

    // sum of 2 numbers

    printf("%d + %d = %d \n", a, b, sum(a,b));

    return 0;
}

// Print Hello function

void printHello() {
    printf("Hello World!! \n");
}

// function to calculate square of a number

int square(int n) {
    return n * n;
}

// sum of 2 numbers

int sum(int n, int m) {
    return n + m;
}