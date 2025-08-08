#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define True 1;

#define False 0;

typedef struct Node
{
    char bit;
    struct Node* nextNode;
};



struct Stack
{
    int nextNode;

    struct Node array[8];

    struct Node* topElement;

    struct Node* popped;

    struct Node* temp;

    
    
};



int main()
{
    int base10Num;

    struct Stack newStack;

    char scanInto;

    int iterator = 8;


    do
    {

        //printf("CharacterInQuestion: %c \n", &string[iterator]);

        printf("Insert a 0 or 1 into the stack");

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

int Push(char value, struct Stack pushHere)
{
    printf("User Inputted: %c\n\n", value);

    

    if(IsEmpty(pushHere))
    {

     if(value == '1' || value == '0')
        {
            
            pushHere.array[8].bit = value;

            pushHere.topElement = &pushHere.array[8];

            return True;

            
        }
        else
        {
            printf("\nValue given is not 0 or 1, input only 0 or 1\n");
            return False;
        }
    }
    
}

char Pop(struct Stack popHere){
    char returning;

    returning = popHere.topElement;
    

}

int IsEmpty(struct Stack isEmpty)
{
    if(isEmpty.topElement = NULL)
    {
        return True;
    }
    else{
        return False;
    }
}

int isFull(struct Stack isFull)
{
    
}

