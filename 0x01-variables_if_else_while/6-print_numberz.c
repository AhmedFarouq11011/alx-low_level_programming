#include<stdio.h>
/**
 * main - Entry point
 *
 * print: 0-9 using putchar(asciicode)
 *
 * Return: Always 0 (Success)
 */



int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num += 1;
	}
	putchar('\n');
	return (0);

}
