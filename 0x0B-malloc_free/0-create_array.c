#include "main.h"

/**
 *create_array - function that creates an array of chars, and initializes it
 *with a specific char.
 *@size: size of memory allocated
 *@c: variable
 *Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;
if (size == 0)
{
return (NULL);
}
s = malloc((size) * sizeof(char));
if (s == 0)
{
return (NULL);
}
i = 0;
while (i < size)
{
s[i] = c;
i++;
}
s[i] = '\0';
return (0);
}
