#include "main.h"

/**
 *_strlen_recursion - function that returns the length of a string
 *@s: string to return length
 *
 *Return: 0
 */

int _strlen_recursion(char *s)
{
if (*s)
{
s++;
return (1 + _strlen_recursion(s));
}
return (0);
}
