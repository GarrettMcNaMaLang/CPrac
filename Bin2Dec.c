#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define True 1;

#define False 0;

struct Stack
{
    
    char secretArray[8];

    char topElement;

    char popped;

    char temp;

    char shiftArrayp[];
    
};

typedef struct Stack stack;

int main()
{
    int base10Num;

    stack newStack;

    char scanInto;

    int iterator = 8;


    do
    {

        //printf("CharacterInQuestion: %c \n", &string[iterator]);

        scanf("%c", &scanInto);
        
        int result = Push(scanInto, newStack);

        if(result == 1)
        {
            iterator--;
        }
        else
        {
            continue;
        }

        
        
    }while (iterator >= 0);

    
    return 0;
}

int Push(char value, stack pushHere)
{
    printf("User Inputted: %c\n\n", value);

     if(value == '1' || value == '0')
        {
            pushHere.temp = pushHere.topElement;

            pushHere.topElement = value;

            return True;

            
        }
        else
        {
            printf("\nValue given is not 0 or 1, input only 0 or 1\n");
            return False;
        }
}

char Pop(stack popHere){
    char returning;

    returning = popHere.topElement;
    

}

