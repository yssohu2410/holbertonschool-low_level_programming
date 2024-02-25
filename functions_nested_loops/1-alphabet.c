#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet,
 in lowercase, followed by a new line.
 *
 * Return: none.
 */
void print_alphabet(void)
{

	char a[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (a[i])
	{
		_putchar(a[i]);
		i++;
	}
}
