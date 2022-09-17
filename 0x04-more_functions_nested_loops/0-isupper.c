#include "main.h"
#include <ctype.h>
/**
 * _isupper -Function that checks for Uppercase Alphabet
 *
 * @c: return char type
 *
 * Return: 0 on success and 1 on fail
 */
int _isupper(int c)
{

int i = isupper(c);

if (i > 0)
{
return (1);
}

else
{
return (0);
}
}
