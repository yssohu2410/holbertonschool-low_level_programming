#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: checker
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < (size - 1 - i); j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
