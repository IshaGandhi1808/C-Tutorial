#include <stdio.h>

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

    return 0;
}