#include "main.h"
/*
<<<<<<< HEAD
* _pow_recursion -> power using recursion
=======
* pow_recursion -> power using recursion
>>>>>>> 64f0e19de955147f4f73d5542e7b0d8bd7aaebad
* @x: x ^ y
* @y: the power number
* Return: power result
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
