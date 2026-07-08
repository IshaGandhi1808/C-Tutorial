#include <stdio.h>
#include <string.h>

int main() {

    // declaration

    char subject[] = {'M', 'A', 'T', 'H', 'S', '\0'};
    char name[] = "Isha";

    for(int i = 0; name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }

    printf("\n");
    
    for(int i = 0; subject[i] != '\0'; i++) {
        printf("%c", subject[i]);
    }
    
    printf("\n");
    
    // printing string with pointer 
    
    for(char *ptr = name; *ptr != '\0'; ptr++) {
        printf("%c", *ptr);
    }
    
    printf("\n");

    // Print using format specifier

    printf("%s \n", name);

    // Input a string 

    /*
    char firstName[25];
    char lastName[25];

    printf("Enter your First Name : ");
    scanf("%s", firstName);

    printf("Enter your Last Name : ");
    scanf("%s", lastName);
    
    printf("Your First Name is %s \n", firstName);
    printf("Your Last Name is %s \n", lastName);

    [ scanf("%s", name); sirf string read karta hai aur Enter (\n) ko input buffer me chhod deta hai.
      Jab uske baad fgets() call hota hai, to woh wahi bacha hua \n padh leta hai aur turant return kar deta hai.]
    */

    // Important : scanf() CANNOT input multi-word strings with spaces, gets() & puts() come into picture

    // gets & puts

    char fullName[50];

    printf("Enter your Full Name : ");

    fgets(fullName, 50, stdin);
    puts(fullName);

    // difference between str[] and *str

    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    char cannotChange[] = "Hello World";
    puts(cannotChange);
    // cannotChange = "Hello"; // ====> throw error

    // ==================================

    // Library functions

    // strlen, strcpy, strcat, strcmp, strchr, strcoll, strcspn, strerror, 

    char name1[] = "Gandhi Isha";
    printf("length is %d \n",strlen(name1)); // 11

    char newVal[50] = "New Value";
    char oldVal[50] = "Old Value";

    strcpy(newVal, oldVal);
    puts(newVal);  // old value

    char val1[50] = "Hello ";
    char val2[] = "World!";

    strcat(val1, val2);

    puts(val1);  // Hello World

    printf("%d \n", strcmp("A", "A"));  // 0
    printf("%d \n", strcmp("a", "b"));  // -1
    printf("%d \n", strcmp("b", "a"));  // 1
    
    return 0;
}