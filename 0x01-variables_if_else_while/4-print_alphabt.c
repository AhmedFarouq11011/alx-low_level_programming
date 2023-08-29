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
	int q = 113;
	int e = 101;

	while (num < 123)
	{
		if (num == q || num == e)
		{
			num += 1;
			continue;
		}
		putchar(num);
		num += 1;
	}
	putchar('\n');
	return (0);


}
