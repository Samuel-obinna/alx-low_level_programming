#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - Print Numbers categories
 * code by sazzy
 * Return: 0
*/

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10;

	if (x > 5)
	{
		printf("Last digits of %d is %d and is greater than 5\n", n, x);
	}
	if (x == 0)
	{
		printf("Last digits of %d is %d and is zero\n", n, x);
	}
	if (x < 0 && x < 6)
	{
		printf("Last digits of %d is %d and is less than 6 and not a  0\n", n, x);
	}
	return (0);
}
