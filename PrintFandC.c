#include <stdio.h>


int main()
{

    char F[16];

    char C[25];

    for(int i = 0; i < 6; i++)
    {
        if(i == 0)
        {
            printf("######\n");
            i++;
        }
        
        

        printf("#\n");

        

        if(i == 2)
        {
            printf("#####\n");
            
        }
        


        

        
        
        
    }

    for(int i = 0; i < 8; i++)
    {
        if(i == 0)
        {
            printf("   ######  \n");
            i++;
        }
        if(i == 1)
        {
            printf(" ##      ##\n");
            i++;
        }

        printf("#\n");

        if(i == 6)
        {
            printf(" ##      ##\n");
            i++;
        }
        if(i == 7)
        {
            printf("  ######  \n");
            i++;
        }
        
    }

        
    return 0;
}