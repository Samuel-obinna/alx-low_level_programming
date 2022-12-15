#include<stdio.h>

/**
 * main - print abc,ABC using putchar
 * code by boss sazzy
 * Return: 0
*/

int main(void)
{
	char B;

	for (B = 'a'; B <= 'z'; B++)
		putchar (B);
	for (B = 'A'; B <= 'Z'; B++)
		putchar (B);
	putchar('\n');
	return (0);
}
