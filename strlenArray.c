#include <cs50.h>
#include <stdio.h>

int string_length(string s);

int main(void)
{

    int number = get_int("How many strings? ");
    string strings[number];

    for(int i = 0;i<number;i++) {
        strings[i] = get_string("String? ");
    }

    for(int i = 0;i<number;i++) {
        int length = string_length(strings[i]);
        printf("Length of '%s': %i\n", strings[i], length);
    }
}

int string_length(string s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

