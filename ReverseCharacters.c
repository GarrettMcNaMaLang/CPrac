#include <stdio.h>
#include <stdlib.h>


int main()
{
    char characters[] = {'X', 'M', 'L'};

    //remember this formula
    int length = sizeof(characters) / sizeof(characters[0]);

    printf("%d \n",length);

    int iterator = 3;
    while(iterator != NULL)
    {
        printf("%c",characters[iterator - 1]);
        iterator--;
    }
    return 0;
}