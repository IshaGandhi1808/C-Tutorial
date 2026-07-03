#include <stdio.h>

int factorial(int n);

int main() {
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    printf("Factorial of %d is %d", n, factorial(n));
    return 0;
}

// factorial using recursion

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