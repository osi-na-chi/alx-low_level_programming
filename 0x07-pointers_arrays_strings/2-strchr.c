#include "main.h"

/**
 *_strchr - function that locates a character in a string
 *@s: the pointer to the string
 *@c: the character to locate
 *Return: pointer to the first occurrence of the character c in the string s.
 *NULL if characteris not found
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
s++;
else
return (s);
}
if (c == '\0')
return (s);
return (NULL);
}
