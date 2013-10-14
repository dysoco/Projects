// Simple piglatin implementation
// "banana" should print "anana-bay"

#include <stdio.h>
#include <string.h>

int main(void) {
    char word[32]; // Whole word
    char cons; // Consonant sound
    
    // User input
    printf("Enter word: ");
    fgets(word, sizeof(word), stdin);
    
    // Check if word is valid
    if(strlen(word) < 2) {
        printf("Enter a valid word\n");
        return 1;
    }
    
    // fgets appends a newline, get rid of it
    word[strlen(word)-1] = '\0';
    
    // Check first consonant
    cons = word[0];
    
    // Print the final word
    printf("%s-%cay\n", word+1, cons);
    
    return 0;
}

