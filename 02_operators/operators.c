#include <stdio.h>

int main() {
    int age = 18;
    int oldAge = age;
    int newAge = oldAge + 2;

    printf("Old age : %d \nNew age : %d \n", oldAge, newAge);

    int rupee = 1, dollar;
    dollar = 90;

    printf("rupee = %d \ndollor = %d \n", rupee, dollar);

    /*
    Order of declaration is important - Wrong Declaration Order

    float pi = 3.14;
    float area = 3.14 * r * r;
    int r = 3; 
    */

    // Valid Declaration

    int age1, age2, age3;

    age1 = age2 = age3 = 18;

    printf("age1 = %d \n age2 = %d \n age3 = %d \n", age1, age2, age3);

    // Invalid Declaration

    // int age1 = age2 = age3 = 18;

    // ===================================================

    int a = 1, b = 2, c = 3;
    
    // valid
    a = b + c;

    // invalid

    /*
    b + c = a;
    a = bc;
    a = b ^ c;
    */

    // NOTE : pow(x,y) for x to the power y

    printf("3 %c 2 = %d \n", '%',3 % 2);
    printf("-3 %c 2 = %d \n", '%',-3 % 2);

    // ============= Type Conversion ==========

    printf("sum of 2 and 3 = %d \n", 2 + 3);  // int + int ==> int 
    printf("sum of 2.0 and 3.0 = %f \n", 2.0 + 3.0); // float + float ==> float 
    printf("sum of 2.0 and 3 = %f \n", 2.0 + 3); // float + int ==> float 

    // ========== Associativity ============

    printf("5 + 2 / 2 * 3 --> Output : %d \n", 5 + 2 / 2 * 3); // 8

    // ============= Operator Precendence ==========

    /*
    
    |----------|-------------------
    | Priority | Operator 
    |----------|-------------------
    | 1        |  !
    | 2        |  * , / , %
    | 3        |  + , -
    | 4        |  < , <= , > , >=
    | 5        |  == , !=
    | 6        |  &&
    | 7        |  ||
    | 8        |  =
    |----------|--------------------

    */

    // ============ Relational Operator ==========

    printf(" 4 == 4 : %d \n", 4 == 4); // 1
    printf(" 4 != 4 : %d \n", 4 != 4); // 0
    printf(" 4 <= 4 : %d \n", 4 <= 4); // 1 
    printf(" 4 < 4 : %d \n", 4 < 4);   // 0
    printf(" 4 >= 4 : %d \n", 4 >= 4); // 1 
    printf(" 4 > 4 : %d \n", 4 > 4);   // 0

    // =========== Logical Operators ===========

    printf("3 < 4 && 4 > 3 : %d \n", 3 < 4 && 4 > 3); // 1
    printf("3 < 4 && 2 > 3 : %d \n", 3 < 4 && 2 > 3); // 0

    printf("3 < 4 || 2 > 3 : %d \n", 3 < 4 || 2 > 3); // 1
    printf("3 > 4 || 4 < 3 : %d \n", 3 > 4 || 4 < 3); // 0

    printf("!( 3 < 4 ) : %d \n", !(3 < 4)); //0
    printf("!(3 < 4 && 3 < 5) : %d \n", !(3 < 4 && 3 < 5)); //0
    printf("!(5 < 4 || 5<3) : %d \n", !(5 < 4 || 5<3)); //1

    // ================ Assignment Operator ============

    int i = 10;
    
    i += 10;
    printf("i += 10 : %d \n", i); // 20

    i -= 10;
    printf("i -= 10 : %d \n", i); // 10

    i *= 10;
    printf("i *= 10 : %d \n", i); // 100

    i /= 10;
    printf("i /= 10 : %d \n", i); // 10

    i %= 10;
    printf("i %c= 10 : %d \n", '%', i); // 0

    // Q 3 : solve int x = 1.9999999;

    /*

    | Type                | Meaning                                                              | Example                         |
    | ------------------- | -------------------------------------------------------------------- | ------------------------------- |
    | Implicit Conversion | Conversion is done automatically by the compiler.                    | int a = 10; float b = a;        |
    | Explicit Conversion | Conversion is done manually by the programmer using a cast operator. | float a = 10.5; int b = (int)a; |

    */

    int x = (int) 1.999999;  // Explicit conversion
    
    printf("[Explicit conversion] int x = 1.99999, then x = %d \n", x); // x = 1

    /* Q 4 : 
    
    1) 5*2-2*3
    2) 5*2/2*3
    3) 5*(2/2)*3
    4) 5+2/2*3

    */

    printf("5*2-2*3 = %d \n", 5*2-2*3);  // 4
    printf("5*2/2*3 = %d \n", 5*2/2*3);  // 15
    printf("5*(2/2)*3 = %d \n", 5*(2/2)*3);  // 15
    printf("5+2/2*3 = %d \n", 5+2/2*3);  // 8
    
    // Q 5 : check if a number is divisible by 2 or not. 
    // Q 6 : check if a number is Even or Odd 

    int num;

    printf("Enter the Number : ");
    scanf("%d", &num);

    printf("1 ==> true (Even) , 0 ==> false (Odd) : %d \n", num % 2 == 0); // 1 ==> true (Even) , 0 ==> false (Odd)

    /*
    
    Q 7 :
    
    Are the following valid or not?
    1) int a = 8^8
    2) int x; int y = x;
    3) int x, y = x;
    4) char stars = '**';

    Ans : 
    
    1) Valid, but output was not Power, but 0 (Bitwise operator)
    2) Valid
    3) Invalid
    4) Invalid  (char allow single character)

    */

    /*
    
    Q 8 : Print 1 (true) or 0 (false) for following statements :

    1) if it's sunday & it's snowing --> true
    2) if it's monday or it's raining --> true
    3) if a number is greater than 9 & less than 100 (2 digit number) --> true

    */

    int sunday, snowing;

    sunday = 1;
    snowing = 1;

    printf("it's sunday & it's snowing : %d \n", sunday && snowing); // 1 

    int monday, raining;

    monday = 1;
    raining = 0;

    printf("it's monday or it's raining : %d \n", monday || raining);  // 1

    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    printf("2 digit number [1 (true) or 0 (false)] : %d \n", (n > 9 && n < 100));  // Ans : 1 --> 2 digit Num , 0 --> not

    // ============= Practice Questions ==========

    // average of 3 numbers

    float p, q, r;

    printf("Enter the 1st Number : ");
    scanf("%f", &p);

    printf("Enter the 2nd Number : ");
    scanf("%f", &q);

    printf("Enter the 3rd Number : ");
    scanf("%f", &r);

    printf("Average of %f, %f and %f = %f \n", p, q, r, (p + q + r) / 3);

    // check if given character is digit or not

    char ch;

    printf("Enter the character : ");
    scanf(" %c", &ch);     // The space tells scanf() to ignore whitespace (including \n) before reading the character. // Usually, a previous scanf() leaves a newline (\n) in the input buffer, and then %c reads that newline instead of waiting for your character.

    if (ch > '0' && ch < '9') {
        printf("%c is Digit \n", ch);
    } else {
        printf("%c is not Digit \n", ch);
    }

    // Print the smallest number of two

    int y, z;

    printf("Enter the 1st Number : ");
    scanf("%d", &y);

    printf("Enter the 2nd Number : ");
    scanf("%d", &z);
    
    if (y < z) {
        printf("%d is small", y);
    } else {
        printf("%d is small", z);
    }
    
    return 0;
}