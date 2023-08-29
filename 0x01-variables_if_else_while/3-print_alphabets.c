#include<stdio.h>
/**
 * main - Entry point
 *
 * print: the alphabet using putchar(asciicode)
 *
 * once in lower once in upper then print a new line
 *
 * Return: Always 0 (Success)
 */



int main(void)
{
	int lower = 97;

	int upper = 65;

	while (lower < 123)
	{
		putchar(lower);
		lower += 1;
	}

	while (upper < 91)
	{
		putchar(upper);
		upper += 1;
	}
	putchar('\n');
	return (0);

}
