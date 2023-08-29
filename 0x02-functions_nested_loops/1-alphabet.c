#include<stdio.h>
#include<string.h>
/**
 * print_alphabet  - print the alphabet using putchar
 *
 * Return: Always 0.
 */
void print_alphabet(void);

void print_alphabet(void)
{
	int i;
	int length;
	char alphabet_lower[27] = "abcdefghijklmnopqrstuvwxyz";

	length = strlen(alphabet_lower);

	for (i = 0; i < length; i++)
	{
		putchar(alphabet_lower[i]);
	}
	putchar('\n');
}
