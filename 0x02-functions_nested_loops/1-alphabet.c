#include "main.h"


	/**
	 * print_alphabet - print all alphabet in lowercase
	 * putchar: return 0 always
	 */


	void print_alphabet(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}

