#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // string answer = get_string("What's your name? ");
    int counter = 0;
    // counter++;
    // counter--;
    if (counter > 0) {
        printf("Positive ");     
    } else if (counter == 0) {
        printf("NULL ");     
    } else {
        printf("Negative ");
    } 

    while (counter < 10) {
        printf("hello %d\n", counter);
        counter++;
    }

    for (int i = 0; i<10; i+=3) {
         printf("hello for: %d\n", i);
    }

    
    printf("hello, %s %i \n", "Ana", counter); 
    // printf("Hello world\n");
    

}


