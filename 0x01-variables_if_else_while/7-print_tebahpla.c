#include<stdio.h>

/**
 * main - print abc in reverse
 * code by boss sazzy
 * Return: 0
*/

int main(void)
{
	char B;

	for (B = 'z'; B >= 'a'; B--)
		putchar (B);
	putchar('\n');
	return (0);
}
