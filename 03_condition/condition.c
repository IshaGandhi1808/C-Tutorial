#include <stdio.h>
#include <math.h>

int main() {

    // if-else 

    int age1 = 20;

    if (age1 >= 18) {
        printf("you are an adult \n");
    } else {
        printf("you are not an adult \n");
    }
    
    // Check if a number is odd or even

    int num;

    printf("Enter the Number : ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Number %d is Even \n", num);
    } else {
        printf("Number %d is odd \n", num);
    }
    
    // Use of else-if

    int age;

    printf("Enter your age : ");
    scanf("%d", &age);

    if (age < 12) {
        printf("you are a child \n");
    } else if (age >=12 && age < 18) {
        printf("you are a teenager \n");
    } else {
        printf("you are an adult \n");
    }

    // Ternary Operator

    int x;

    printf("Enter the number : ");
    scanf("%d", &x);

    x % 2 == 0 ? printf("Even \n") : printf("Odd \n");

    // switch-case (integer)

    int day;

    printf("Enter the Day Number between 1 to 7 : ");
    scanf("%d", &day);

    switch (day) {
    case 1:
        printf("Monday \n");
        break;
    
    case 2:
        printf("Tuesday \n");
        break;
    
    case 3:
        printf("Wednesday \n");
        break;
    
    case 4:
        printf("Thurseday \n");
        break;
    
    case 5:
        printf("Friday \n");
        break;
    
    case 6:
        printf("Saturday \n");
        break;
    
    case 7:
        printf("Sunday \n");
        break;
        
    default:
        printf("Invalid Number \n");
        break;
    }

    // switch-case (character)

    char day1;

    printf("Enter the Day letter (m, t, w, T, f, s, S): ");
    scanf(" %c", &day1);

    switch (day1) {
    case 'm':
        printf("Monday \n");
        break;
    
    case 't':
        printf("Tuesday \n");
        break;
    
    case 'w':
        printf("Wednesday \n");
        break;
    
    case 'T':
        printf("Thurseday \n");
        break;
    
    case 'f':
        printf("Friday \n");
        break;
    
    case 's':
        printf("Saturday \n");
        break;
    
    case 'S':
        printf("Sunday \n");
        break;
        
    default:
        printf("Invalid Number \n");
        break;
    }

    // Nested conditions

    int n;

    printf("Enter the Number : ");
    scanf("%d", &n);

    if (n >= 0) {

        printf("%d is Positive Number \n", n);

        if (n % 2 == 0) {
            printf("%d is Even Number \n", n);
        } else {
            printf("%d is Odd Number \n", n);
        }

    } else {
        printf("%d is Negative Number \n", n);
    }

    // Q 9 : Check if a student passed or failed. marks > 30 is PASS , marks <= 30 is FAIL

    int marks;

    printf("Enter the Marks : ");
    scanf("%d", &marks);

    if (marks > 30 && marks <= 100) {
        printf("PASS \n");
    } else if (marks <= 30 && marks >= 0) {
        printf("FAIL \n");
    } else {
        printf("Wrong Marks \n");
    }
    
    marks > 30 ? printf("PASS \n") : printf("FAIL \n");

    /*
    
    Q 10 : Give Grades to a student

    marks < 30 is C
    30 <= marks < 70 is B
    70 <= marks < 90 is A
    90 <= marks <= 100 is A+

    */

    int marks1;

    printf("Enter the Marks (Grade) : ");
    scanf("%d", &marks1);

    if (marks1 >= 90 && marks1 <= 100) {
        printf("Grade A+ \n");
    } else if (marks1 >= 70 && marks1 < 90) {
        printf("Grade A \n");
    } else if (marks1 >= 30 && marks1 < 70) {
        printf("Grade B \n");
    } else if (marks1 < 30 && marks1 >= 0) {
        printf("Grade C \n");
    } else {
        printf("Wrong Marks \n");
    }

    /*
    
    Q 11 : Will this code : 

    int x = 2;

    if (x = 1) {
        printf("x is equal to 1");
    } else {
        printf("x is not equal to 1"); 
    }

    a) give error
    b) print "x is equal to 1"
    c) print "x is not equal to 1"

    Ans : b) print "x is equal to 1" ===> Because 0 means false and != 0 means true [!= 0 ---> 1, 2, -1, -2] ===> true  

    if (x = 4) --> true / if (x = 0) --> false 

    if you want to compare value of x, use == [for comparision --> use "==" , for assignment --> use "="]

    */
    
    int x1 = 2;

    if (x1 = 1) {
        printf("x is equal to 1 \n");
    } else {
        printf("x is not equal to 1 \n"); 
    }

    // Q 12 : find if a character entered by user is upper case or not.

    char ch;

    printf("Enter the character (upper case or not) : ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("%c : Upper case character \n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c : Lower case character \n", ch);
    } else {
        printf("%c : not English character \n", ch);
    }
    
    // ========== Practice Questions =========

    // check if the given number is a natural number (Natural numbers start from 1)

    float n1;

    printf("Enter the Number (Natural number) : ");
    scanf("%f", &n1);

    if (n1 >= 1 && n1 == (int) n1) {        //  N == (int) N ==> : Eliminates any values with floating-point decimals (e.g., 4.2 becomes 4, and 4.2 != 4, so it fails).
        printf("%f is Natural Number \n", n1);
    } else {
        printf("%f is not Natural Number \n", n1);
    }
    
    // check if a given number is Armstrong number or not. 

    /*
    
    Armstrong Number : a number that equals the sum of its own digits each raised to the power of the number of digits.

    For example, 153 is an Armstrong number because it has 3 digits, and 1³ + 5³ + 3³ = 1 + 125 + 27 = 153.
    
    Key Rules :
    
    Single-digit numbers (0 to 9) are always Armstrong numbers.
    The power for each digit depends on how many digits are in the full number (e.g., cubed for 3 digits, to the power of 4 for 4 digits).
    
    Examples :
    
    153: 3 digits, so \(1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153\) (Yes)
    371: 3 digits, so \(3^3 + 7^3 + 1^3 = 27 + 343 + 1 = 371\) (Yes)
    1634: 4 digits, so \(1^4 + 6^4 + 3^4 + 4^4 = 1 + 1296 + 81 + 256 = 1634\) (Yes)
    122: 3 digits, so \(1^3 + 2^3 + 2^3 = 1 + 8 + 8 = 17\) (No)

    */

    int num1;

    printf("Enter the Number (Armstrong Number) : ");
    scanf("%d", &num1);

    float ans = 0;
    int power = 0;

    int copyNum = num1;

    while (copyNum > 0) {
        copyNum = copyNum / 10;
        power++;
    }

    int temp = num1;
    int digit;

    while (temp > 0) {

        digit = temp % 10;
        temp = temp / 10;

        ans += pow(digit, power);
    }

    if (num1 == (int) ans) {
        printf("%d is Armstrong Number \n", num1);
    } else {
        printf("%d is not Armstrong Number \n", num1);
    }

    return 0;
}