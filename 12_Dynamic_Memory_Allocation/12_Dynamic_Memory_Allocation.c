#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("int size : %d \n", sizeof(int));  // 4
    printf("float size : %d \n", sizeof(float));  // 4
    printf("char size : %d \n", sizeof(char));  // 1

    /*
    malloc() ===> memory allocation
    malloc() : Take number of bytes to be allocated & returns a pointer of type void  
    */
    
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;
    
    for (int i = 0; i < 5; i++) {
        printf("%d \n", ptr[i]);
    }

    /*
    free() : We use it to free memory that is allocated using malloc & calloc
    free(ptr);
    */

    free(ptr);

    /*
    calloc() ===> continuous allocation
    calloc() : initialize with 0
    */

    ptr = (int *) calloc(5, sizeof(int));
    
    for (int i = 0; i < 5; i++) {
        printf("%dth = %d \n", i, ptr[i]);
    }

    /*
    realloc() : reallocate ( increase or decrease ) memory using the same pointer & size.
    ptr = realloc(ptr, newSize); // newSize in byte 
    */
    
    // Qs : Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers.

    ptr = realloc(ptr, 8 * sizeof(int));  // realloc() preserves the old contents, but it does not initialize the newly allocated portion.

    for (int i = 5; i < 8; i++) {
        printf("%dth = ", i);
        scanf("%d", &ptr[i]);
    }
    

    for (int i = 0; i < 8; i++) {
        printf(" %dth : %d \n" , i, ptr[i]);
    }

    free(ptr);
    
    // Qs : WAP to allocate memory to store 5 prices.

    float *ptr1;
    ptr1 = (float *) malloc(5 * sizeof(float));

    ptr1[0] = 1.1;
    ptr1[1] = 1.2;
    ptr1[2] = 1.3;
    ptr1[3] = 1.4;
    ptr1[4] = 1.5;

    for (int i = 0; i < 5; i++) {
        printf("%f \n", ptr1[i]);
    }

    free(ptr1);

    // Qs : WAP to allocate memory of size n, where n is entered by the user.

    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    
    int *ptr2;
    ptr2 = (int *) calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("%d \n", ptr2[i]);
    }

    free(ptr2);

    // Qs : Create an array of size 5 ( using calloc ) & enter its values from the user.

    ptr = (int *) calloc(5, sizeof(int));
    
    for (int i = 0; i < 5; i++) {
        printf("%dth value : ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%dth value : %d \n", i, ptr[i]);
    }

    free(ptr);
    
    // Allocate memory to store first 5 

    ptr = (int *) calloc(5, sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for (int i = 0; i < 5; i++) {
        printf("Odd Number : %d \n", ptr[i]);
    }

    ptr = realloc(ptr, 6 * sizeof(int));

    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;
    
    for (int i = 0; i < 6; i++) {
        printf("Even Number : %d \n", ptr[i]);
    }

    free(ptr);

    return 0;
}