#include <stdio.h>

int main() {

    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    // for loop 

    printf("***** for loop ***** \n");

   for (int i = 1; i <= 10; i++)
   {
    printf("%d * %d = %d \n", n, i, n * i);
   }

   // while loop 

   printf("***** while loop *****\n");

   int i = 1;

   while (i <= 10)
   {
    printf("%d * %d = %d \n", n , i , n * i);
    i++;
    }

    // do...while loop

    
   printf("***** do...while loop ***** \n");

    int j = 1;
    do{
       printf("%d * %d = %d \n", n , j , n * j);
        j++;
   } while (j <= 10);
   
   printf("***** do...while loop ===> run at least one time ***** \n");

    int k = 10;
    do{
       printf("Hello Coders!! \n");
        k++;
   } while (k <= 10);

   // break statement =====> Exit the loop 

   printf("*****break statement *****\n");

   for (int i = 1; i <= 5; i++) {
    
    if (i == 3) {
        break;
    }
        
    printf("%d \n", i);  // 1 2
    
   }

   // continue statement =====> skip to next iteration

   printf("***** continue statement *****\n");

   for (int i = 1; i <= 5; i++) {
    
    if (i == 3) {
        continue;;
    }
        
    printf("%d \n", i); // 1 2 4 5
    
   }
   
   // nested loops

   for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
        printf(" %c", '*');
    }
    printf("\n");
   }
   
    return 0;
}