#include "main.h"

/**
 *_strlen_recursion - function that returns the length of a string
 *@s: string to return length
 *
 *Return: 0
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return 1 + strlen(s + 1);
}
