#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked -  function aloow memory
 * @b: unsignd b
 * Return: return to b
 */
void *malloc_checked(unsigned int b);
void *ptr;
ptr = malloc(b);
if (!ptr)
exit(98);
return (ptr);
}
