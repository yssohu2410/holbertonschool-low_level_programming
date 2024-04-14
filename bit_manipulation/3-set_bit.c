#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <math.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index of bit
 * Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
