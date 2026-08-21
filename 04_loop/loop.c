#include <stdio.h>

int isprime(int n);

int main() {

    // Q 16 : print the table of a number input by the user

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    // for loop 

    printf("***** for loop ***** \n");

   for (int i = 1; i <= 10; i++)
   {
    printf("%d * %d = %d \n", n, i, n * i);
   }

   // while loop 

   printf("***** while loop *****\n");

   int i = 1;

   while (i <= 10)
   {
    printf("%d * %d = %d \n", n , i , n * i);
    i++;
    }

    // do...while loop

    
   printf("***** do...while loop ***** \n");

    int j = 1;
    do{
       printf("%d * %d = %d \n", n , j , n * j);
        j++;
   } while (j <= 10);
   
   printf("***** do...while loop ===> run at least one time ***** \n");

    int k = 10;
    do{
       printf("Hello Coders!! \n");
        k++;
   } while (k <= 10);

   // break statement =====> Exit the loop 

   printf("*****break statement *****\n");

   for (int i = 1; i <= 5; i++) {
    
    if (i == 3) {
        break;
    }
        
    printf("%d \n", i);  // 1 2
    
   }

   // continue statement =====> skip to next iteration

   printf("***** continue statement *****\n");

   for (int i = 1; i <= 5; i++) {
    
    if (i == 3) {
        continue;;
    }
        
    printf("%d \n", i); // 1 2 4 5
    
   }
   
   // nested loops

   for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
        printf(" %c", '*');
    }
    printf("\n");
   }
   
    // Q 13 : Print the number from 0 to 10 
    
    for(int i = 0; i <= 10; i++) {
        printf("%d \n", i);
    }

    // increment (pre - post increment) & decrement (pre - post decrement) operator

    // i++ (post increment) ++i (post increment)
    
    int a = 1;
    
    printf("a = %d \n", a);  // 1

    printf("a++ = %d \n", a++);  // 1   // use, then increase
    printf("a = %d \n", a);  // 2
    
    printf("++a = %d \n", ++a);  // 3   // increase, then use
    printf("a = %d \n", a);  // 3

    // i-- (post decrement) --i (post decrement)
    
    printf("a-- = %d \n", a--);  // 3  // use, then decrease
    printf("a = %d \n", a);  // 2
    
    printf("--a = %d \n", --a);  // 1   // decrease, then use
    printf("a = %d \n", a);  // 1

    // float loop

    for (float i = 0; i < 5; i++) {
        printf("%f \n", i);
    }

    for (char i = 'A'; i <= 'Z'; i++) {
        printf("%c ", i);
    }
    
    printf("\n");
    
    for (char i = 'a'; i <= 'z'; i++) {
        printf("%c ", i);
    }

    printf("\n");
    
    // Q 14 : print the number from 0 to n, if n is given by user

    int n14;

    printf("Enter the Number : ");
    scanf("%d", &n14);
    
    for (int i = 0; i <= n14; i++) {
        printf("%d \n", i);
    }
    
    // Q 15 : print the sum of first n Natural Numbers. Also, Print them in reverse.
    
    int n15;
    int sum = 0;
    
    printf("Enter the Number : ");
    scanf("%d", &n15);

    for (int i = n15; i >= 1; i--) {
        printf("%d \n", i);
        sum += i;
    }

    printf("sum of first %d Natural Numbers = %d \n", n15, sum);
    
    // Q 17 : Keep taking numbers as input from user until user enters an odd number 

    int n17;

    do {
        printf("Enter the Number : ");
        scanf("%d", &n17);

        if (n17 % 2 != 0) {
            break;
        }  
    } while (1);

    printf("Thank You! \n");

    // Q 18 : Keep taking numbers as input from user until user enters a number which is multiple of 7

    int n18;

    do {
        printf("Enter the Number which is Multiple of 7 : ");
        scanf("%d", &n18);
    } while (n18 % 7 != 0);

    printf("%d is multiple of 7 \n", n18);

    // Q 19 : print all number from 1 to 10 except for 6

    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            continue;
        }
        printf("%d \n", i);
    }

    // Q 20 : print all the odd numbers from 5 to 50

    for (int i = 5; i < 50; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    // Q 21 : print the factorial of a number n.

    int n21;

    printf("Enter the number (Factorial of n) : ");
    scanf("%d", &n21);

    int factorial = 1;

    for (int i = 1; i <= n21; i++) {
        factorial *= i;
    }

    printf("Factorial of %d = %d \n", n21, factorial);
    
    // Q 22 : print reverse of the table for a number n

    int n22; 

    printf("Enter the Number : ");
    scanf("%d", &n22);

    for (int i = 10; i >= 1; i--) {
        printf("%d * %d = %d \n", n22, i, n22 * i);
    }

    // Q 23 : calculate the sum of all numbers between 5 to 50, (including 5 to 50) 
    
    int sum23 = 0;

    for (int i = 5; i <= 50; i++) {
        sum23 += i;
    }

    printf("Sum of 5 to 50 = %d \n", sum23);
    
    // =========== Practice Questions ===========

    /*
    *****
    *****
    *****
    *****
    */

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("*");
        }
        printf("\n");
    } 

    // check if a number is prime or not
    
    int n1;
    int isPrime = 1; // true

    printf("Enter the Number (prime or not) : ");
    scanf("%d", &n1);

    for (int i = 2; i < n1; i++) {
        if (n1 % i == 0) {
            isPrime = 0;    // false 
            break;
        }
    }

    if (n1 == 0 || n1 == 1 || isPrime == 0) {
        printf("%d is NOT a Prime Number \n", n1);
    } else {
        printf("%d is a Prime Number \n", n1);
    }

    // Print Prime numbers in a range

    int n2;

    printf("Enter the Number (Prime numbers in a range) : ");
    scanf("%d", &n2);

    for (int i = 2; i < n2; i++) {
        if (isprime(i) == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    
    return 0;
}

int isprime(int n) {

    if (n == 0 || n == 1) {
        return 0;   // false
    }
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;       // false 
        }
    }
    return 1;   // true
}