#include<stdio.h>
/**
 * main - Entry point
 *
 * print: 0-9 & a-f using putchar(asciicode)
 *
 * Return: Always 0 (Success)
 */



int main(void)
{
	int num = 48;
	int letter = 97;

	while (num < 58)
	{
		putchar(num);
		num += 1;
	}
	while (letter < 103)
	{
		putchar(letter);
		letter += 1;
	}
	putchar('\n');
	return (0);

}
