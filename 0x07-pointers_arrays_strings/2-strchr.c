#include "main.h"
#include <stddef.h>
/**
* _strchr -> string character
* @s: string given
* @c: another char
* Return: x string
*/
char *_strchr(char *s, char c)
{
int x;
while (1)
{
x = *s++;
if (x == c)
{
return (s - 1);
}
if (x == 0)
{
return (NULL);
}
}
}
