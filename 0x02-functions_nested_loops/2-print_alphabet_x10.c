#include"main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 * Code written by sazzy
*/

void print_alphabet_x10(void)
{
	char A;
	int times = 1;

	while (times++ <= 10)
	{
		for (A = 'a'; A <= 'z'; A++)
		_putchar('A');
	}
	_putchar('\n');
}
