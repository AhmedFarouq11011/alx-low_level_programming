#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/* more headers goes there */

/**
 * _isdigit- check if a letter is upper
 *@c : letter to be checked if itsupper or not
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c);
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
