#include "main.h"

/**
 * get_endianness - checks the  system byte order
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x;
	int little_or_big;

	little_or_big = (int)(((chr *)&x)[0]);
	return (little_or_big);
}

