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

    printf("age1 = %d \nage2 = %d \nage3 = %d \n", age1, age2, age3);

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

    return 0;
}