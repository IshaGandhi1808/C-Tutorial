#include <stdio.h>

int factorial(int n);

void printHello(int count);

int sumOfnNumbers(int n);

int fibonacciTerms(int n);

int fibonacci(int n);

int main() {

    // Q 32 : factorial using recursion

    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    printf("Factorial of %d is %d \n", n, factorial(n));

    // Q 30 : Print "Hello World" 5 times

    printHello(5);

    // Q 31 : Sum of first n natural numbers

    int num1;

    printf("Enter the Number (Sum of n Natural Numbers): ");
    scanf("%d", &num1);

    printf("Sum of first %d Natural Numbers = %d \n", num1, sumOfnNumbers(num1));

    // Q 33 : Write a function to print n terms of the fibonacci sequence

    int n1;

    printf("Enter the Number (Fibonacci Sequence) : ");
    scanf("%d", &n1);

    for (int i = 1; i <= n1; i++) {
        printf("%d ", fibonacciTerms(i));
    }

    printf("\n");

    // Q 34 : Write a function to print the nth term of the fibonacci sequence

    int n2;

    printf("Enter the Number (Fibonacci Sequence nth term) : ");
    scanf("%d", &n2);

    printf("%dth term of fibonacci sequence = %d \n", n2, fibonacciTerms(n2));

    // Q 35 : Write a function to print n terms of the fibonacci sequence (Using Loop)
    
    printf("%dth term of fibonacci sequence = %d \n", n2, fibonacci(n2));
    
    for (int i = 1; i <= n2; i++) {
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}

// Q 32 : factorial using recursion

int factorial(int n) {

    // base case ====> Base Case is the condition which stops recursion

    if (n == 1)  {
        return 1;
    }

    return n * factorial(n - 1);
}


// factorial using loop

/*

int factorial(int n) {
    int factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    return factorial;
}

*/

// Q 30 : Print "Hello World" 5 times

void printHello(int count) {

    if (count == 0) {
        return;
    }
    printf("Hello World \n");
    printHello(count - 1);
}

// Q 31 : Sum of first n natural numbers

int sumOfnNumbers(int n) {

    if (n == 1) {
        return 1;
    }
    return sumOfnNumbers(n - 1) + n;
}

// Q 33 : Write a function to print n terms of the fibonacci sequence

int fibonacciTerms(int n) {
    if (n == 1) {
        return 0;
    }
    
    if (n == 2) {
        return 1;
    }
    
    return fibonacciTerms(n - 1) + fibonacciTerms(n - 2);
}    

// Q 35 : Write a function to print n terms of the fibonacci sequence (Using Loop)

int fibonacci(int n) {

    if (n == 1) {
        return 0;
    } 

    if (n == 2) {
        return 1;
    } 
    
    int f1 = 0;
    int f2 = 1;
    int next;
    
    for (int i = 3; i <= n; i++) {
        next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
    return next;
}