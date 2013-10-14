// Count vowels in text
#include <stdio.h>
#include <string.h>

// Return 1 if vow, 0 if not
int isvow(const char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
       c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return 1;
    }
    
    return 0;
}

int main(void) {
    char text[256];
    int vows = 0;
    
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    
    int i;
    for(i = 0; i <= strlen(text)-1; i++) {
        if(isvow(text[i])) {
            vows++;
        }
    }
    
    printf("There are %d vowels in the text\n", vows);
    
    return 0;
}
