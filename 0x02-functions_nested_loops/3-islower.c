#include"main.h"

/**
 * _islower - Checks if an  alphabets is in lowercase
 * Code written by sazzy
 * @c: character to be checked
 * Return: 1 for lowercase or otherwise 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
