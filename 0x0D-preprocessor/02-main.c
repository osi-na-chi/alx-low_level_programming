#include <stdio.h>

/**
 *main - prints the name of the file it was compiled from
 *@argc: counts arguments
 *@argv: points to set of arrays
 *Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
