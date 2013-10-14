// Reverse a string

#include <stdio.h>
#include <string.h>

int main(void) {
    char text[256];
    
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    if(strlen(text) < 1) {
        printf("Must enter a string!\n");
        return 1;
    }
    
    int i;
    for(i = strlen(text); i >= 0; i--) {
        printf("%c", text[i]);
    } 
    
    printf("\n");
    return 0;   
}
