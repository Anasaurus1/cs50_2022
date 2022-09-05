#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int number = get_int("How many scores? ");
    int scores[number];

    for(int i = 0;i<number;i++) {
        scores[i] = get_int("Score? ");
    }
    

    printf("Average: %f\n", (scores[1] + scores[0] + scores[2]) / (float) number);
}