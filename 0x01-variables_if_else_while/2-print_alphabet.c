#include <stdio.h>

/**
*main - Entry Point
*Description: Print the Alphabets in lowercase
*Return: 0
*/

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter ++)
putchar(letter);
putchar('\n');
/* Print lowercase letters*/
return (0);
}
