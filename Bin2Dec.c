#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define True 1;

#define False 0;

#define MAXARRAYSIZE 8

typedef struct
{
    char bit;
    struct Node* nextNode;
} Node;



typedef struct 
{
    int nextNode;

    Node array[MAXARRAYSIZE];

    Node* topElement;

    Node* popped;

    Node* temp;

    int iterator;
    
} Stack;

int IsEmpty(Stack *isEmpty)
{
    if(isEmpty->topElement == 0)
    {
        return True;
    }
    else{
        return False;
    }
}

int isFull(Stack *isFull)
{
    if(isFull->iterator == MAXARRAYSIZE - 1)
    {
        return True;
    }
    else{
        return False;
    }
}

void StackStart(Stack *stack)
{
    stack->topElement = 0;
}


int Push(char value, Stack *pushHere)
{
    printf("User Inputted: %c\n\n", value);

    if(value != '1' || value != '0')
        return False;

    if(isFull(pushHere))
        return False;

    if(IsEmpty(pushHere))
    {

    
            
            

            pushHere->array[++pushHere->iterator].bit = value;

            pushHere->topElement = &pushHere->array[pushHere->iterator];
            
            //pushHere->nextNode = &pushHere->array[++pushHere->iterator];

            return True;

            
        
            
    }
    

    
    
}

char Pop(Stack *popHere){

    if(IsEmpty(popHere))
        return -1;

    char returning = popHere->topElement->bit;

    popHere->topElement = &popHere->array[--popHere->iterator];

    return returning;
    

}



int main()
{
    int base10Num = 0;

    char fullString[MAXARRAYSIZE];

    Stack *newStack = newStack;

    char scanInto;

    int iterator = MAXARRAYSIZE - 1;

    StackStart(newStack);

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

    iterator = MAXARRAYSIZE - 1;

    do{
        char currBit = Pop(newStack);

        int decBit = currBit - '0';

        base10Num += decBit * (2^iterator);


    }while (iterator >= 0);

    printf("Decimal value: %d", base10Num);
    
    return 0;
}



