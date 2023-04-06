#include "main.h"

/**
* _pow_recursion - Entry Function
 * @x: integer
 * @y: integer
*the return value of x
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
