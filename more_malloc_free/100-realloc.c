#include "main.h"
#include <string.h>
#include <stdlib.h>
#define MIN(x, y)  ((x) > (y) ? (y) : (x))
/**
 * _realloc - fills memory
 * @ptr: str
 * @old_size: str
 * @new_size: size
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *buf;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	buf = malloc(new_size);
	for (i = 0; i < MIN(old_size, new_size); i++)
	{
		*(buf + i) = *(((char *)ptr) + i);
	}
	free(ptr);
	return (buf);
}
