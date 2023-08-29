#include <stdio.h>
#include "main.h"
/**
 *swap_int  - Print 1 if n > 0 elif n < 0 return -1 else 0
 *@a : Pointer that will be updated
 *@b : Pointer to be swaped
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b);
void swap_int(int *a, int *b)
{
	int temp = *b;

	*b = *a;
	*a = temp;
}
