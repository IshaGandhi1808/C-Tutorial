#include <stdio.h>

int main() {

    // Read File

    FILE *fptr;

    fptr = fopen("Test.txt", "r");

    if (fptr == NULL) {
        printf("File doesn't Exit.");
    } else {

        char ch;

        // ==========================================  Test.txt --> This is a random string of words.

        ch = fgetc(fptr);
        
        while (ch != EOF) {  // EOF ( End Of File ) ===> fgetc returns EOF to show that the file has ended
            printf("%c", ch);
            ch = fgetc(fptr);
        }
        
        // ==========================================
        
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
        fscanf(fptr, "%c", &ch);
        printf("%c \n", ch);

        fclose(fptr);
    }
    

    // Writing in a file 

    fptr = fopen("Test.txt", "w"); // "w" ==> w mode write in file, if file doesn't exit --> create new file / if file exits --> delete old file data & rewrite new data in file
    
    // fptr = fopen("Test.txt", "a"); // "a" ==> a mode --> append , add new data in exiting file / append new data in exiting file
    
    // fptr = fopen("Test.txt", "rb"); // open to read in binary (photos , audio --> .jpg, .mp3, .exe)
    // fptr = fopen("Test.txt", "wb"); // open to write in binary
    
    fprintf(fptr, "%c", 'Y');
    fprintf(fptr, "%c", 'Z');

    fclose(fptr);
    
    // fgetc ==> Read file data [same as fscanf() ==> fscanf(fptr, "%c", &ch);]

    fptr = fopen("Test.txt", "r");

    printf("%c", fgetc(fptr));
    printf("%c \n", fgetc(fptr));

    fclose(fptr);

    // fputc ==> write in file [same as fprintf() ==> fprintf(fptr, "%c", ch);]

    fptr = fopen("Test.txt", "w");

    fputc('I', fptr);
    fputc('S', fptr);

    fclose(fptr);

    return 0;
}