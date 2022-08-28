#include <stdio.h>
#include <stdbool.h>
#include <cs50.h>

int main(void)
{
    int width = get_int("Width: ");
    int height = get_int("Height: ");
    
    for (int i = 0; i<height; i++) {
        if(i >= 2) {
            break;
        }

        for (int j = 0; j<width; j++) {
            if( j >= 2) {
                break;
            }
            printf ("#");
        }
        printf ("\n");
        
    }
    
    
}
