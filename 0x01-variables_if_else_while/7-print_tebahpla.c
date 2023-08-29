#include<stdio.h>
/**
 * main - Entry point
 *
 * print: the alphabet reversed using putchar(asciicode)
 *
 * Return: Always 0 (Success)
 */



int main(void)
{
	int num = 122;

	while (num > 96)
	{
		putchar(num);
		num -= 1;
	}
	putchar('\n');
	return (0);


}
