#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define True 1;

#define False 0;

#define MAXARRAYSIZE 8

typedef struct node
{
    char val;
    struct node *next;
    struct node *previous;
    /* data */
}node_ch;



typedef struct stack
{
    int currAmount;
    node_ch* currNode;

    //char array[MAXARRAYSIZE];

    node_ch* Head;
    
    char* popped;

    char* temp;
    
} Stack;

int IsEmpty(Stack* isEmpty)
{
    if(isEmpty->Head == NULL)
    {
        return True;
    }
    else{
        return False;
    }
}

int isFull(Stack* isFull)
{
    if(isFull->currAmount == MAXARRAYSIZE - 1)
    {
        return True;
    }
    else{
        return False;
    }
}

void StackStart(Stack *stack)
{
    //stack->Head = NULL;
    
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
        pushHere->Head->val = value;
        pushHere->Head->next = pushHere->currNode;
        pushHere->Head->previous = NULL;
        pushHere->currAmount++;
        
            
            
    }
    
    pushHere->currNode = (node_ch*) malloc(sizeof(node_ch));
    pushHere->currNode->val = value;
    pushHere->currNode->next = NULL;
    pushHere->currNode->previous = pushHere->currNode;
    pushHere->currNode = pushHere->currNode->next;
    pushHere->currAmount++;
    
    
    return True;

    
    
}

char Pop(Stack *popHere){

    if(IsEmpty(popHere))
        return -1;

    //char returning = popHere->topElement->bit;

    popHere->currNode = popHere->currNode->previous;
    return popHere->currNode->val;
    
    
    //               6return returning;
    

}



int main()
{
    int base10Num = 0;

   

    Stack *newStack = newStack;

    char scanInto;

    int iterator = MAXARRAYSIZE - 1;

    StackStart(newStack);

    do
    {

        //printf("CharacterInQuestion: %c \n", &string[iterator]);

        printf("Insert a 0 or 1 into the stack\n\n");

        scanf("%c\n\n", &scanInto);

        
        
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



