#include <stdio.h>

// Enter address (house no, block, city, state) of 5 people.

struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

// Create a structure to store vectors. Then make a function to return sum of 2 vectors.

struct vectors {
    int x;
    int y;
};

// Create a structure to store complex numbers. (use arrow operator)

struct complex {
    int real;
    int img;
};

// Make a structure to store Bank Account information of a customer of ABC Bank. Also, make an alias for it.

typedef struct BankAccountainfo {
    int accNo;
    char name[100];
} acc;

void printAddress(struct address add);
void printVectorsSum(struct vectors v1, struct vectors v2);
void printComplexNumber(struct complex *ptr);

int main() {

    // Create a structure to store vectors. Then make a function to return sum of 2 vectors.

    struct vectors v1 = {5, 10};
    struct vectors v2 = {3, 8};

    printVectorsSum(v1, v2);

    // Create a structure to store complex numbers. (use arrow operator)

    struct complex num = {5, 8};
    struct complex *ptr = &num;

    printComplexNumber(ptr);

    // Make a structure to store Bank Account information of a customer of ABC Bank. Also, make an alias for it.

    acc a1 = {10101, "Isha"};
    
    printf("Bank Account Name %s and Account Number %d \n", a1.name, a1.accNo);

    // Enter address (house no, block, city, state) of 5 people.

    struct address add[5];

    for (int i = 0; i < 5; i++) {

        printf("Enter the Address %d \n", i+1);

        printf("House Number : ");
        scanf("%d", &add[i].houseNo);
        printf("Block Number : ");
        scanf("%d", &add[i].block);
        printf("City : ");
        scanf("%s", add[i].city);
        printf("State : ");
        scanf("%s", add[i].state);
    }

    printAddress(add[0]);
    printAddress(add[1]);
    printAddress(add[2]);
    printAddress(add[3]);
    printAddress(add[4]);

    return 0;
}


void printAddress(struct address add) {
    printf("Address : %d, %d, %s, %s \n", add.houseNo, add.block, add.city, add.state);
}


void printVectorsSum(struct vectors v1, struct vectors v2) {
    int sumX = v1.x + v2.x;
    int sumY = v1.y + v2.y;

    printf("Sum of Vectors : (%d, %d) \n", sumX, sumY);
}

void printComplexNumber(struct complex *ptr) {
    printf("Real Number : %d \n", ptr->real);
    printf("Imaginary Number : %d \n", ptr->img);
}