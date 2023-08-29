#include<stdio.h>
#include<string.h>
/**
 * print_alphabet_x10 - print the alphabet 10 times using putchar
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void);
void print_alphabet_x10(void)
{
	int k, i;
	int length;
	char alphabet_lower[27] = "abcdefghijklmnopqrstuvwxyz";

	length = strlen(alphabet_lower);

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i < length; i++)
		{
			putchar(alphabet_lower[i]);
		}
	putchar('\n');
	}
}
