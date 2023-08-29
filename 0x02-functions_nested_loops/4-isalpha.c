#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - Print 1 if its lowercase 0 if its not
 *@c : Description of parameter x
 *
 * Return: Always 0.
 */
int _isalpha(int c);
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
