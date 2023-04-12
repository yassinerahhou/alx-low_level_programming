#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code 
 * Return: Always zero
 */
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
