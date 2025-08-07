#include <stdio.h>

int main()
{
    printf("how many values will we be working with");

    int n;

    scanf("%d", &n);

    int pIntegers[n];

    for(int i = 0; i <= n; i++){

        printf("input a number into the array for position\n");
        printf("%d", i);

        scanf("%d", &pIntegers[n - 1]);
        
    }   

    return 0;
}