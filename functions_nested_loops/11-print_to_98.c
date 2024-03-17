#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: variable
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		printf("%d", n);
		for (x = n + 1 ; x <= 98 ; x++)
		{
			printf(", %d", x);

		}
	}
	else if (n >= 98)
	{
		printf("%d", n);
		for  (x = n - 1 ; x >= 98 ; x--)
		{
			printf(", %d", x);
		}
	}
	else
	{
		printf("%d", 98);
	}
	printf("\n");
}
