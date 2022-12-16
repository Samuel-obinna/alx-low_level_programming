#include"main.h"

/**
 * print_sign - Prints number sign
 * Code written by Sazzy
 * @n: character to be checked
 * Return: 1, 0 or -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	elsee
	{
		_putchar(0);
		return (0);
	}
}
