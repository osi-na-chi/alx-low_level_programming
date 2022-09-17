#include <unistd.h>

/**
 * _putchar - prints char c to stdout
 *
 * @c: character to print
 *
 * Return: 1 on Success
 *On error, -1 is returned 
 */
int _putchar(char c)
{
return (write (1, &c, 1));
}
