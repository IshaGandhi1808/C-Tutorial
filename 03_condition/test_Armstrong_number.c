#include <stdio.h>
#include <math.h>

int main() {
    
    // Armstrong Numbers : 153, 371, 1634, single digit number (0-9)

    // pow() returns a double, not an int

    int num1;

    printf("Enter the Number (Armstrong Number) : ");
    scanf("%d", &num1);

    float ans = 0;

    int digit, power = 0;

    int copyNum = num1;

    while (copyNum > 0) {
        copyNum = copyNum / 10;
        power++;
    }

    printf("power = %d \n", power);
    printf("num1 = %d \n", num1);
    
    int copyNum1 = num1;

    while (copyNum1 > 0) {
        digit = copyNum1 % 10;
        copyNum1 = copyNum1 / 10;
        
        ans += pow(digit, power); 

        float a = pow(digit, power); // pow() returns a double, not an int // pow(5, 3) → 124.999999999... // 124.999999999 → 124

        printf("digit = %d power =  %d a = %f \n", digit, power, a);

        printf("ans = %f \n", ans);
    }

    printf("Final Ans = %d \n", (int) ans);

    int x = pow(5, 3);
    printf("5^3 : %d \n", x);
    
    if (num1 == (int) ans) {
        printf("%d is Armstrong Number \n", num1);
    } else {
        printf("%d is not Armstrong Number \n", num1);
    }
    
    return 0;
}