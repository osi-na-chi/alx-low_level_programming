#include "main.h"

/**
 *rev_string - function that reverses strings
 *@s: string parameter input
 *Return: Nothing
 */
void rev_string(char *s)
{
int l, i;
char ch;
/*find string length without null*/
for (l = 0; s[l] != '\0'; ++l)
;
for (i = 0; i < l / 2; ++i)
ch = s[i];
s[i] = s[l - 1 - i];  /*-1 because the array starts from 0*/
s[l - 1 - i] = ch;
}
