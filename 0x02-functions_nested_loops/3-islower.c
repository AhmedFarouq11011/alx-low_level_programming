#include <stdio.h>
#include <ctype.h>
/**
 * _islower - Print 1 if its lowercase 0 if its not
 *@c : Description of parameter x
 *
 * Return: Always 0.
 */
int _islower(int c);
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
