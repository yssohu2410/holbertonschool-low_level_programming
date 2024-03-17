#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * array_range - fills memory
 * @min: str
 * @max: str
 * Return: char
 */
int *array_range(int min, int max)
{
	int *buf;
	int i;

	if (min > max)
		return (NULL);
	buf = malloc(sizeof(int) * (max - min + 1));
	if (buf == NULL)
		return (NULL);
	for (i = 0; i + min <= max; i++)
	{
		buf[i] = min + i;
	}
	return (buf);
}
