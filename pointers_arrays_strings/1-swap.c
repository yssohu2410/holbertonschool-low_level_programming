#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: checker
 * @b: checker
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
