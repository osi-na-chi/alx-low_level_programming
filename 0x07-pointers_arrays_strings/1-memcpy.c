#include "main.h"

/**
 *_memcpy - function that copies memory area.
 *@dest: pointer for the memory area to copy
 *@src: a memory area
 *@n: the number of bytes
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
