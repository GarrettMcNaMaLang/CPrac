#include <stdio.h>

int main(int argc, char** argv)
{
    #if __STDC_VERSION__ >= 201710L
        printf("Using C18\n");
    #elif __STDC_VERSION__ >= 201112L
        printf("Using C11\n");
    #elif __STDC_VERSION >= 199901L
        printf("Using C99\n");
    #else
        printf("Using C89/C90\n");

    #endif
    return 0;

    //Preprocessor Branching Statements
    //#if, #elif, #else, #endif

    //__STDC_VERSION__ determines what the version
    //of C is 

    
}