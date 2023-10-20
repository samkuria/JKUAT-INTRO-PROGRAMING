#include <stdio.h>
#include <stdlib.h>

int main()
{
    float first_value , second_value, third_value;
    printf("Enter the first value:");
    scanf("%f" ,&first_value);
    printf("Enter the second value:");
    scanf("%f", &second_value);
    printf("Enter the increment value:");
    scanf("%f", &third_value);
    while ( first_value <= 100)
    {
        if ((first_value > 98.6)&&(second_value < 98.6))
        {
            printf("%6.2f degrees F = %6.2f degrees C\n",
                   98.6, (98.6 -32.0) * 5.0 / 9.0);
        }
        printf("%6.2f degrees F = %6.2f degrees C\n",
               first_value,(first_value - 32.0) * 5.0 / 9.0);
               second_value= first_value;
               first_value= first_value + third_value;

    }

    return 0;
}
