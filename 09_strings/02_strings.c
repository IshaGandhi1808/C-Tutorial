#include <stdio.h>
#include <string.h>

void printString(char str[]);
void checkCharacter(char str[], char ch);
int countLength(char str[]);
void salting(char password[]);
void slicing(char str[], int n, int m);
int countVowel(char str[]);

int main() {

    // Enter String using %c

    char str[50];
    char ch;
    int i = 0;

    printf("Enter your Name : ");

    while (ch != '\n') {
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }

    str[i] = '\0';

    puts(str);
    
    printString("Isha Gandhi"); 

    checkCharacter("hello", 'l');

    printf("vowel count : %d \n", countVowel("Hello"));  // 2

    printf("%d \n", countLength("Isha Gandhi")); // 11
    
    char str1[100];
    printf("Enter the string : ");
    fgets(str1, 100, stdin);
    printf("%d \n", countLength(str1)); 
    
    char password[100];
    printf("Enter the Password : ");
    scanf("%s", password);
    salting(password);
    
    slicing("HelloWorld", 3, 6);

    return 0;
}

void slicing(char str[], int n, int m) {
    char sliceStr[100];
    int j = 0;
    for (int i = n; i <= m; i++, j++)
    {
        sliceStr[j] = str[i];
    }

    sliceStr[j] = '\0';
    
    puts(sliceStr);
    
}

void salting(char password[]) {
    char salt[] = "123";
    char newPassword[100];

    strcpy(newPassword, password);
    strcat(newPassword, salt);
    
    puts(newPassword);
}

int countLength(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            continue;
        }
        
        count++;
    }
    return count;
}

int countVowel(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' )
        {
            count++;
        }
        
    }
    return count;
}

void checkCharacter(char str[], char ch) {
    for (int i = 0; i != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("character %c is present in string %s \n", ch, str);
            return;
        }
    }
    printf("Character %c is not present in string %s \n", ch, str);
}

void printString(char str[]) {
    for(int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}