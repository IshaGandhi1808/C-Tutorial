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

    // area of square

    int side;

    printf("Enter the Side : ");
    scanf("%d", &side);

    printf("Area of Square = %d \n", side * side);

    // area of circle 

    int radius;

    printf("Enter the Radius of Circle : ");
    scanf("%d", &radius);

    printf("Area of Circle = %f \n", 3.14 * radius * radius);
    

    return 0;
}
