#include "main.h"

/**
 * print_square - check the code
 * @size: check
 * Return: Always 0.
 */
void print_square(int size)
{
	if(size > 0)
	{
		int i, j 

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
