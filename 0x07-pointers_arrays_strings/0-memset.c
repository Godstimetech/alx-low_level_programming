#include "main.h"
#include <string.h>

/**
* _memset -> this memory set function
* @s: string
* @b: x charcter
* @n: an integer
* Return:  x string
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
s[x] = b;
return (s);
}
