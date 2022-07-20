#include "main.h"
/**
 * _puts_recursion ->this is a function that print string recursively
 * @s:this is the input string
 */
void _puts_recursion(char *s)
{
int y = 0;
for (y = 0; s[y] != '\0'; y++)
{
_putchar(s[y]);
}
_putchar('\n');
}
