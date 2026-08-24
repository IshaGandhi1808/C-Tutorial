#include <stdio.h>
#include <math.h>

void printHello();
int square(int n);
int sum(int n, int m);

void hello();
void goodbye();

void printNamaste();
void printBonjour();

void printTable(int n);

void calculateprice(float price);

float squareArea(float n);
float circleArea(float radius);
float ractangleArea(float a, float b);

int sumOfDigit(int n);
float sqaureroot(int n);

void printTemperature(int temperature);
void hot();
void cold();

int power(int n, int m);

float squareRoot(float n);

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

    // Q 27 : Write 2 functions - one to print "Hello" & second to print "good bye".

    hello();
    goodbye();

    // Q 28 : Write a function that print Namaste if user is Indian & Bonjour if the user is French.    

    char ch;

    printf("Enter 'I' for an Indian and 'F' for a French : ");
    scanf(" %c", &ch);

    if (ch == 'I' || ch == 'i') {
        printNamaste();
    } else if (ch == 'F' || ch == 'f') {
        printBonjour();
    } else {
        printHello();
    }

    // print table of number n

    int n1;

    printf("Enter the Number : ");
    scanf("%d", &n1);

    printTable(n1);     // Argument   // Actual parameter

    // calculate Final price 

    float price = 100.0;

    calculateprice(price);
    
    // Q 29 : Use library functions to calculate the sqaure of a number given by user

    printf("Square of 5 is %f \n", pow(5, 2));

    // Q 31 :  Write functions to calculate area of a square, a circle & a ractangle

    float side = 5;
    printf("Area of a Square : %f \n", squareArea(side));
    
    float radius = 4;
    printf("Area of a Circle : %f \n", circleArea(radius));
    
    float length = 5;
    float width = 2;

    printf("Area of a Ractangle : %f \n", ractangleArea(length, width));
    
    //  =============== Practice Questions =============

    // Write a function to find sum of digits of a number

    int num;

    printf("Enter the Number (Sum of digits) : ");
    scanf("%d", &num);

    printf("Sum of digits of Number %d = %d \n", num, sumOfDigit(num));

    // Write a function to find square root of a number

    int num1;
    printf("Enter the Number (Square root) : ");
    scanf("%d", &num1);

    printf("Square root of Number %d = %f \n", num1, sqaureroot(num1));

    // Write a function to print "Hot" ot "Cold" depending on the temperature user enters

    int temperature; 

    printf("Enter the Temperature in Celsius : ");
    scanf("%d", &temperature);

    printTemperature(temperature);

    // Make your own pow function

    int base, exponent;

    printf("Enter the base Number : ");
    scanf("%d", &base);

    printf("Enter the Power : ");
    scanf("%d", &exponent);

    printf("Power of %d^%d = %d \n", base, exponent, power(base, exponent));
        
    // Write a function to find the square root of a number
    // Newton-Raphson method:

    printf("Square root of a number 81 = %.2f", squareRoot(81));

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

// Q 27 : Write 2 functions - one to print "Hello" & second to print "good bye".

void hello() {
    printf("Hello \n");
}

void goodbye() {
    printf("Good Bye \n");
}

// Q 28 : Write a function that print Namaste if user is Indian & Bonjour if the user is French.

void printNamaste() {
    printf("Namaste \n");
}

void printBonjour() {
    printf("Bonjour \n");
}

// print table of number n

void printTable(int n) {                    // Parameter  // Formal parameter
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d \n", n, i, n * i);
    }
}

// calculate Final price 

void calculateprice(float price) {
    price = price + (price * 0.18);
    printf("Final Price is : %f \n", price);
}

// Q 31 :  Write functions to calculate area of a square, a circle & a ractangle

float squareArea(float n) {
    return n * n;
}

float circleArea(float radius) {
    return 3.14 * radius * radius;
}

float ractangleArea(float a, float b) {
    return a * b;
}

//  =============== Practice Questions =============

// Write a function to find sum of digits of a number

int sumOfDigit(int n) {
    int sum = 0;

    while (n > 0)  {

        int lastDigit = n % 10;

        sum += lastDigit;

        n = n / 10;
    }
    return sum;
}

// Write a function to find square root of a number

float sqaureroot(int n) {
    return sqrt(n);
    // return pow(n, 0.5);
}

// Write a function to print "Hot" ot "Cold" depending on the temperature user enters

void printTemperature(int temperature) {
    if (temperature < 11) {
        cold();
    } else if (temperature >= 28) {
        hot();
    } else if (temperature >= 11 && temperature < 28) {
        printf("Cool / Warm");
    }
}

void hot() {
    printf("Hot \n");
}

void cold() {
    printf("Cold \n");
}

// Make your own pow function

int power(int n, int m) {

    int power = 1;

    for (int i = 1; i <= m; i++) {
        power = power * n;
    }
    return power;
}

// Write a function to find the square root of a number
// Newton-Raphson method:

float squareRoot(float n) {
    float x = n;
    float root;

    for (int i = 0; i < 10; i++) {
        root = 0.5 * (x + n / x);
        x = root;
    }

    return root;
}