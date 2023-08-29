#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/* more headers goes there */

/**
 * _isupper- check if a letter is upper
 *@c : letter to be checked if itsupper or not
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c);
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
