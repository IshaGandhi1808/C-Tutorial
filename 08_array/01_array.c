#include <stdio.h>

int main() {

    int _marks[] = {100, 99, 98};
    // int _marks[3] = {100, 99, 98};  // both syntax right (write arr length or not)
    
    int marks[3];

    printf("Physics : ");
    scanf("%d", &marks[0]);

    printf("Chemistry : ");
    scanf("%d", &marks[1]);

    printf("Maths : ");
    scanf("%d", &marks[2]);

    printf("Physics = %d \t Chemistry = %d \t Maths = %d \n", marks[0], marks[1], marks[2]);

    // Q ) Enter price of 3 items & print their final cost with gst

    float price[3];

    printf("Enter 3 Price : \n");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    printf("Final Price 1 : %f \n", price[0] + (price[0] * 0.18));
    printf("Final Price 2 : %f \n", price[1] + (price[1] * 0.18));
    printf("Final Price 3 : %f \n", price[2] + (price[2] * 0.18));

    // =========  Pointer Arithmetic =========

    int age = 18;
    int *ptr = &age;

    printf("ptr : %u \n", ptr);  // 1000
    ptr++;
    printf("ptr : %u \n", ptr);  // 1004 ====> pointer perform only 2 operation + and - on their variable's data type, here int = 4 bytes (for float = 4 bytes, char = 1 byte)
    ptr--;
    printf("ptr : %u \n", ptr);  // 1000

    float price_ = 100.00;
    float *ptr1 = &price_;

    printf("ptr float: %u \n", ptr1);  // 1000
    ptr1++;
    printf("ptr float: %u \n", ptr1);  // 1004 ====> pointer perform only 2 operation + and - on their variable's data type, here int = 4 bytes (for float = 4 bytes, char = 1 byte)
    ptr1--;
    printf("ptr float: %u \n", ptr1);  // 1000

    char star = '*';
    char *ptr2 = &star;

    printf("ptr char: %u \n", ptr2);  // 1000
    ptr2++;
    printf("ptr char: %u \n", ptr2);  // 1001 ====> pointer perform only 2 operation + and - on their variable's data type, here int = 4 bytes (for float = 4 bytes, char = 1 byte)
    ptr2--;
    printf("ptr char: %u \n", ptr2);  // 1000

    /*
    - We can also subtract one pointer from another 
    - we can also compare 2 pointers
    */

    int a = 2;
    int *ptra = &a;

    int b = 1;
    int *ptrb = &b;

    printf("Difference of 2 pointer : %u - %u = %u \n", ptra, ptrb, ptra - ptrb); // ptra = 1000, ptrb = 1004 , ptra - ptrb = 1 ( 1 means 4 bytes)

    ptrb = &a;

    printf("Compare 2 ptr : %u \n", ptra == ptrb); // 1 ( 1 ==> true, 0 ==> false)

    // ******* ========== Array is a Pointer =========== ********

    /*
        int *ptr = &arr[0];
        or 
        int *ptr = arr; 
    */

    int aadhar[5];

    for(int i = 0; i < 5 ; i++) {
        printf("Index %d : ", i);
        scanf("%d", &aadhar[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("Index of %d : %d \n", i, aadhar[i]);
    }
    
    // ======================= 2nd syntax ==============

    int aadhar1[5];

    int *ptrp = &aadhar1[0]; 

    for(int i = 0; i < 5 ; i++) {
        printf("Index %d : ", i);
        // scanf("%d", &aadhar[i]);
        scanf("%d", ptrp + i);
    }

    for (int i = 0; i < 5; i++) {
        // printf("Index of %d : %d \n", i, aadhar[i]);
        printf("Index of %d : %d \n", i, *(ptrp + i));
    }

    return 0;
}