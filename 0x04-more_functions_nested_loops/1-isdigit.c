#include "main.h"
#include <ctype.h>

/**
 * _isdigit - function that checks for a digit
 *
 * @c: character to print
 *
 * Return: 1 if it is, 0 otherwise
 */

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
return (0);
}
