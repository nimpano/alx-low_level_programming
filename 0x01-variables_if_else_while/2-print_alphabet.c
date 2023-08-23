#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int Ii;
for (Ii = 0; Ii < 26; Ii++)
{
	putchar(alp[Ii]);
}
putchar('\n');

	return (0);
}
