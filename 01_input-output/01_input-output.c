#include <stdio.h>

int main() {
    printf("Hello World! \n"); // First Program
    
    // Variables & Data Types
    
    int n = 18;
    float pi = 3.14;
    char ch = '*';

    printf("n = %d  \n", n);
    printf("pi = %f \n", pi);
    printf("ch = %c \n", ch);

    // Get value from user

    int age;

    printf("Enter your age : ");
    scanf("%d", &age);

    printf("You are %d years old \n", age);

    // Sum of 2 Numbers

    int a,b;

    printf("Enter the First value : ");
    scanf("%d", &a);

    printf("Enter the second value : ");
    scanf("%d", &b);

    printf("First value is %d \n", a);
    printf("Second value is %d \n", b);

    printf("Sum of %d and %d is %d \n", a,b, a+b );

    // Q1 : area of square

    int side;

    printf("Enter the Side : ");
    scanf("%d", &side);

    printf("Area of Square = %d \n", side * side);

    // Q2 : area of circle 

    int radius;

    printf("Enter the Radius of Circle : ");
    scanf("%d", &radius);

    printf("Area of Circle = %f \n", 3.14 * radius * radius);
    
    // Perimeter of rectangle 

    float l,w;

    printf("Enter the length of Rectangle : ");
    scanf("%f", &l);

    printf("Enter the width of Rectangle : ");
    scanf("%f", &w);

    printf("Perimeter of Rectangle of length %f and width %f is %f \n", l, w, 2 * (l + w));

    // cube of number

    int num;

    printf("Enter the Number : ");
    scanf("%d", &num);

    printf("Cube of %d = %d \n", num, num * num * num);

    return 0;
}

/*

Compilation : A Computer program that translates C code into machine code 

keywords : Reserved words that have special meaning to the compiler ====> 32 Keywords in C

| 1. `auto`      | 2. `break`    | 3. `case`      | 4. `char`    |
| 5. `const`     | 6. `continue` | 7. `default`   | 8. `do`      |
| 9. `double`    | 10. `else`    | 11. `enum`     | 12. `extern` |
| 13. `float`    | 14. `for`     | 15. `goto`     | 16. `if`     |
| 17. `int`      | 18. `long`    | 19. `register` | 20. `return` |
| 21. `short`    | 22. `signed`  | 23. `sizeof`   | 24. `static` |
| 25. `struct`   | 26. `switch`  | 27. `typedef`  | 28. `union`  |
| 29. `unsigned` | 30. `void`    | 31. `volatile` | 32. `while`  |

Variables Rules 

1) Variables are case sensitive 
2) 1st character is alphabet or '_'
3) no comma / blank space 
4) No other symbol other than '_'

*/