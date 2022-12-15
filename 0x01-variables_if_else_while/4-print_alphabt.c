#include<stdio.h>

/**
 * main - print abc, except q and e
 * code by boss sazzy
 * Return: 0
*/

int main(void)
{
	char B;

	for (B = 'a'; B <= 'z';  B++)
	{
		if (B != 'q' && B != 'e')
		putchar (B);
	}
	putchar('\n');
	return (0);
}
