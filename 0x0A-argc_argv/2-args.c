#include <stdio.h>
#include "main.h"
/**
*main - program argument
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

		printf("The argument for %d is %s\n", i, argv[i]);

	return (0);
}



