#include "main.h"

/**
* print_alphabet_x10 - print all alphabet in lowercase ten times
*/

void print_alphabet_x10(void)
{
    char letter;
    for (int i = 0; i < 10; i++) {
        for (letter = 'a'; letter <= 'z'; letter++) {
            _putchar(letter);
        }
        _putchar('\n');
    }
}
