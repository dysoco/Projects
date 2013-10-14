// Count words in a string
#include <stdio.h>
#include <string.h>

int main(void) {
    char text[256];
    int words = 0;
    
    // Read the text
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    
    // fgets appends a newline, get rid of it
    text[strlen(text)-1] = '\0';
    
    // For each space, count it as a word
    int i;
    for(i = 0; i <= strlen(text)-1; i++) {
        if(text[i] == ' ') {
            words++;
        }
    }
    
    // We add 1 because up to the 1st space there's only one word
    printf("There are %d words in the string.\n", words+1);
    
    return 0;
}
