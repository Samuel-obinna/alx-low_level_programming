#include<stdio.h>

/**
 * main - print hexadecimal using putchar
 * code by boss sazzy
 * Return: 0
*/

int main(void)
{
	char B;

	for (B = 0; B <= 9; B++)
		putchar ((B % 10) + '0');
	for (B = 'a'; B <= 'f'; B++)
		putchar (B);
	putchar('\n');
	return (0);
}
