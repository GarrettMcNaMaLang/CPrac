#include <stdio.h>

int main()
{
    
   int c; 
    while ((c = getchar()) != EOF) { 
        // Process the character (e.g., print it) 
        putchar(c); 
        // Check if the expression is true (1) or false (0) 
        printf("getchar() != EOF: %d\n", c != EOF); 
    } 
   
}