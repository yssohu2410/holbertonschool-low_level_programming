#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - fills memory
 * @b: int
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *buf = malloc(b);

	if (buf == NULL)
		exit(98);
	return (buf);
}
