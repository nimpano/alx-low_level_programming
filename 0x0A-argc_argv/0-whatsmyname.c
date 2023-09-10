#include <stdio.h>
/** main - a program that prints its name, followed by a new line
 * Return: always return zero
 */
int main(int argc, char *argv[])
{
	printf("The program argument count is: %d\n", argc);
	{
	int i;
	for (i= 0; i < argc; i++)
		printf("The program name is %s\n", argv[0]);
	}	
	return (0);
}
