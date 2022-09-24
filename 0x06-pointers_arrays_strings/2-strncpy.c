#include "main.h"

/**
 *_strncpy - function that copies a string
 *@dest: This is a pointer to a character array
 *@src: This pointer points to the character array
 *@n: the maximum number of characters
 *Result: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
