#include "main.h"

/**
 *_strncat - function that concatenates two string
 *@dest: This is pointer to the destination array
 *@src: this is the string to be appended
 *@n: This is the maximum number of characters to be appended
 *Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (*(dest + i))
{
i++;
}
while (*(src + j) != '\0' && j < n)
{
*(dest + i) = src[j];
i++;
j++;
}
return (dest);
}
