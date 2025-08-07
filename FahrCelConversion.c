#include <stdio.h>

int main()
{
    float fahr, celsius, lower, upper, step;

    //lower limit of temperature scale
    lower = 0;
    //upper limit
    upper = 300;
    //step size
    step = 20;

    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    //while(fahr <= upper)
     //{
      //  celsius = 5 * (fahr - 32) / 9;
      //  printf("%f\t%f\n", fahr, celsius);
      //  fahr = fahr + step;
    // }

     for(fahr = 300; fahr >= lower; fahr -= 20)
     {
        
     }
     celsius = lower;
      printf("Celsius\tFahrenheit\n");
     while(celsius <= upper)
     {
        fahr = (celsius + 32) * (9/5);
        printf("%f\t%f\n", celsius, fahr);
        celsius = celsius + step;
     }
}