#include<stdio.h>
/**
 * main - Entry point
 *
 * print: the alphabet using putchar(asciicode)
 *
 * Return: Always 0 (Success)
 */



int main(void)
{
	int num = 97;

	while (num < 123)
	{
		putchar(num);
		num += 1;
	}
	putchar('\n');
	return (0);


}
