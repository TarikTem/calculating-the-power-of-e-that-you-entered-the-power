#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    
// project 4: calculating powers of 'e' number

    printf("Calculating the power of 'e' number\n======================================\n");

    while (1)
    {
        int i = 0;
        int power_of_e;
        // float result = 0;
        float fact = 1, exp_number;
        float division;
        printf("Enter the power of e:");
        scanf("%d", &power_of_e);

        while (i < 15)
        {
            exp_number = pow(power_of_e, i);

            if (i == 0 || power_of_e == 0)
            {
                fact = 1;
            }
            else
            {
                fact = fact * i;
            }

            division = exp_number / fact;
            // result += division;
            i++;
            printf("%d. result :%.2f\n",i,division);
        }

        // printf("e ^ %d = %.2f\n", power_of_e, result);
    }

    // End of the project 4

    getch();
    return 0;
}
