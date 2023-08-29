#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *reverse_array  - reversing an array
 *@a :the array to be reversed
 *@n :size of the array
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n);
void reverse_array(int *a, int n)
{
	int first = 0;
	int last = n - 1;
	int temp;

	for (; first != last; first++)
	{
		temp = a[last];
		a[last] = a[first];
		a[first] = temp;
		last--;
	}
}
