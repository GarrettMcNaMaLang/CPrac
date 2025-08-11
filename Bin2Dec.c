#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define True 1;

#define False 0;

#define MAXARRAYSIZE 8

typedef struct
{
    char bit;
    Node* nextNode;
} Node;



typedef struct 
{
    int nextNode;

    Node array[MAXARRAYSIZE];

    Node* topElement;

    Node* popped;

    Node* temp;

    
    
} Stack;



int main()
{
    int base10Num;

    Stack *newStack;

    char scanInto;

    int iterator = MAXARRAYSIZE;


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
        

        
        
    }while (iterator >= 0);

    
    return 0;
}

void StackStart(Stack *stack)
{
    stack->topElement = NULL;
}


int Push(char value, Stack *pushHere)
{
    printf("User Inputted: %c\n\n", value);

    

    if(IsEmpty(pushHere))
    {

     if(value == '1' || value == '0')
        {
            
            pushHere->array[MAXARRAYSIZE - 1].bit = value;

            pushHere->topElement = &pushHere->array[MAXARRAYSIZE - 1];

            return True;

            
        }
        else
        {
            printf("\nValue given is not 0 or 1, input only 0 or 1\n");
            return False;
        }
    }
    
}

char Pop(Stack *popHere){
    char returning;

    returning = popHere->topElement;
    

}

int IsEmpty(Stack *isEmpty)
{
    if(isEmpty->topElement == NULL)
    {
        return True;
    }
    else{
        return False;
    }
}

int isFull(Stack *isFull)
{
    if(isFull->topElement == MAXARRAYSIZE - 1)
    {
        return True;
    }
    else{
        return False;
    }
}

