#include<stdio.h>
/**
 * main - Entry point
 *
 * print: 0-9 & adding(" ,") to achieve that you use '' for putchar
 *
 * corner case in the last number thats why you add the if else statement
 *
 * Return: Always 0 (Success)
 */



int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		if (num == 57)
		{
			num += 1;
		}
		else
		{
			putchar(',');
			putchar(' ');
			num += 1;
		}
	}

	putchar('\n');
	return (0);

}
