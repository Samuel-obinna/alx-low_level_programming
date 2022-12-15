#include<stdio.h>

/**
 * main - print num with putchar
 * code by boss sazzy
 * Return: 0
*/

int main(void)
{
	int B;

	for (B = 0; B < 10; B++)
		putchar ((B % 10) + '0');
	putchar('\n');
	return (0);
}
