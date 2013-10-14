// Check if a word is palindrome
// For example: "racecar" is palindrome

#include <stdio.h>
#include <string.h>

int main(void) {
    char text[256];
    char reverse[256];
    
    // Read the text
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    
    // fgets appends a newline, get rid of it
    text[strlen(text)-1] = '\0';

    // Check for an invalid string
    if(strlen(text) < 1) {
        printf("Must enter a string!\n");
        return 1;
    }
    
    int i; // Goes backwards (for text)
    int j = 0; // Goes up (for reverse)
    for(i = strlen(text)-1; i >= 0; i--) {
        reverse[j] = text[i];
        j++;
    }
    
    // Print both strings
    printf("%s --- %s\n", text, reverse);
    
    // Check if palindrome (text and reverse are equal)
    if(strcmp(text, reverse) == 0) {
        printf("They are palindrome.\n");
    } else {
        printf("They are not palindrome.\n");
    }
    
    return 0;
}

