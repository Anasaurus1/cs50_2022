#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void)
{

    string name = get_string("Who are you?");
    int length = strlen(name);
    
    printf("Length: %i\n", length);
}
