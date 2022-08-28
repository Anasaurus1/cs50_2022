// #include <cs50.h>
// #include <stdio.h>

// int main(void)
// {
//     float amount = get_float("Dollar Amount: ");
//     printf("%.50f",amount);
//     int pennies = amount * 100;
//     printf("Pennies: %i\n", pennies);
// }

#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float amount = get_float("Dollar Amount: ");
    int pennies = round(amount * 100);
    printf("Pennies: %i\n", pennies);
}