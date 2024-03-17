#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - fills memory
 * @s1: str
 * @s2: str
 * @n: num
 *
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, i;
	char *buf;

	if (s1 == NULL)
		size1 = 0;
	else
		size1 = strlen(s1);
	if (s2 == NULL)
		size2 = 0;
	else
		size2 = strlen(s2);
	if (size2 > n)
		size2 = n;
	buf = malloc(size1 + size2 + 1);
	if (buf == NULL)
		return (NULL);
	for (i = 0; i < size1 + size2; i++)
	{
		if (i < size1)
			buf[i] = s1[i];
		else
			buf[i] = s2[i - size1];
	}
	buf[i] = '\0';
	return (buf);
}
