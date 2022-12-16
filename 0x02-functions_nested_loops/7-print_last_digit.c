#include"main.h"

/**
 * print_last_digit - Print last digit  of numbers
 * Code written by Sazzy
 * @n: The number whose last digit is to be printed
 * Return: The absolute last digit of the numbers
*/

int print_last_digit(int n)
{
	int g = n % 10;

/* g is used to refer to the last digits */
		if (g < 0)
		{
			g = g * -1;
			_putchar (g + '0');
		}
		else
		{
			_putchar (g + '0');
		}


		return (g);
}
