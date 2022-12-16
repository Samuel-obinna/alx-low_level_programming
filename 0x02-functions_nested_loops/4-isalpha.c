#include"main.h"

/**
 * _isalpha - Checks if a character  is an alphabet
 * Code written by sazzy
 * @c: character to be checked
 * Return: 1 for lowercase or otherwise 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
