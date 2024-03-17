#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - fills memory
 * @nmemb: tr
 * @size: str
 * Return: char
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *buf;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	buf = malloc(nmemb * size);
	if (buf == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		buf[i] = 0;
	return (buf);
}
