#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int __puts(char* s)
{
    int i;
    for(i = 0; s[i] != '\0'; i++)
    {
        _putchar(s[i]);
    }
    return 0;
}
