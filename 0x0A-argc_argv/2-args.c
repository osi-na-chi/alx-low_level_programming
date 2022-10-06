#include <stdio.h>

/**
 *main - prints all arguments it receives.
 *@argc: counts the arguments
 *@argv: pointer to a string of arrays
 *Return: 0
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
