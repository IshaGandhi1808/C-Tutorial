#include <stdio.h>

void printNumbers(int arr[], int n);  
void _printNumbers(int *arr, int n);
int oddNumber(int arr[], int n);  
void reverse(int arr[], int n);
void printArray(int arr[], int n);
void fibonacci(int n);
void marksArray(int arr[][10], int n, int m, int number);

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    printNumbers(arr, 5);
    _printNumbers(arr, 5);

    // 2D Array 

    int marks[2][3]; // ---|---

    marks[0][0] = 99;
    marks[0][1] = 97;
    marks[0][2] = 96;

    marks[1][0] = 95;
    marks[1][1] = 98;
    marks[1][2] = 99;

    printf("%d \n", marks[1][2]); // 99

    // count of odd numbers in array

    printf("Odd Numbers in Array = %d \n", oddNumber(arr, 5)); // 3 

    // reverse array 

    reverse(arr, 5);   // Array is a pointer (call by reference)

    printArray(arr, 5);

    // n fibonacci numbers
    
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);

    fibonacci(n);

    // 2D array, storing the tables of 2 & 3

    int table[2][10];
    marksArray(table, 0, 10, 2);
    marksArray(table, 1, 10, 3);

    for (int i = 0; i < 10; i++) {
        printf("%d \t", table[0][i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d \t", table[1][i]);
    }

    return 0;
}

// Q 5 ) Create a 2D array, storing the tables of 2 & 3

void marksArray(int arr[][10], int n, int m, int number) {  // 2D array ===> [][] ==> 1st [] pointer , 2nd [] array, so need to pass arrray's size
    for(int i = 0; i < m; i++) {
        arr[n][i] = number * (i+1);
    }
}

// Q 3) Write a function to reverse an array

void reverse(int arr[], int n) {
    for(int i = 0; i < n/2; i++) {

        int firstVal = arr[i];
        int lastVal = arr[n - 1 - i];

        arr[i] = lastVal;
        arr[n - 1 - i] = firstVal;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
    
}

// Q 4 ) Write a program to store the first n fibonacci numbers

void fibonacci(int n) {
    int arr[n];

    arr[0] = 0;
    arr[1] = 1;

    for(int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2]; 
    }

    for (int i = 0; i < n; i++) {
        printf("%d \t", arr[i]);
    }

    printf("\n");
    
}

// Q 2 ) Write a function to count the number of odd numbers in an array

int oddNumber(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) { // odd
            count++;
        }
    }
    return count;
}

// Q 1) Write a function to print numbers of array

void printNumbers(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

void _printNumbers(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

/*

int arr[] = {1,2,3,4,5}

for the given array, what will the following give? 

a) *(arr+2) ====> ans) 3

b) *(arr+5) ====> ans) 0 ---> not part of array

*/