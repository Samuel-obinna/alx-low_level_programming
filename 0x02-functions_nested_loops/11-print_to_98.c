#include"main.h"

/**
 * print_to_98 - Print from n to 98
 * @n: The number to start printing from
 * Code written by Sazzy
*/

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

