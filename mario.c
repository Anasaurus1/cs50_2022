#include <stdio.h>
#include <stdbool.h>
#include <cs50.h>

int main(void)
{
    int width = get_int("Width: ");
    int height = get_int("Height: ");
    
    for (int i = 0; i<height; i++) {
        for (int j = 0; j<width; j++) {
            printf ("#");
            if( j > 10) {
                break;
            }
        }
        printf ("\n");
    }
    
    
}
