#include <stdio.h>

/**
 *main - Entry Point
 *Description:  prints the alphabet in lowercase except e and q
 *Return: 0
 */

int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
	putchar(letter);
}
putchar('\n');
return (0);
}
