#include <stdio.h>
#include "main.h"
/**
 *reset_to_98  - Print 1 if n > 0 elif n < 0 return -1 else 0
 *@n : Pointer that will be updated
 *
 * Return: Always 0.
 */
void reset_to_98(int *n);
void reset_to_98(int *n)
{
	*n = 98;
}
