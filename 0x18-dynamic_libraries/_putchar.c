#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int _putchar(char c)
{
return(write(1, &c, sizeof(char)));
}
int _putstring(char* str)
{
    int i;
    for(i = 0; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }
    return 0;
}


