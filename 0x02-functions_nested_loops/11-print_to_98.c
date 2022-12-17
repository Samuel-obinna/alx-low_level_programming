#include"main.h"

/**
 * print_to_98 - Print from n to 98
 * @n: The number to start printing from
 * Code written by Sazzy
 * Return: 0
*/

int print_to_98(int n)
{
	int digits;

	if (n < 98)
	{
		for (digits = n; digits <= 98; digits++)
			_putchar((digits) + '0');
	}
	else
	{
		for (digits = n; digits >= 98; digits--)
			_putchar((digits) + '0');
	}
	_putchar(',');
	_putchar(' ');
	return (0);
}
