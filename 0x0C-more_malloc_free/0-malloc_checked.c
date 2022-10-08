#include "main.h"

/**
 *malloc_checked - function that allocates memory using malloc
 *
 *@b: size of allocated memory for malloc
 *
 *Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *a;
a = malloc(b);
if (a == NULL)
exit(98);
return (a);
}
