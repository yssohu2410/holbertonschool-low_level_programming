#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * strtow - fills memory
 * @str: str
 * Return: char
 */
char **strtow(char *str)
{
	char **buf;
	int i, s = 0, e = 0, size, nw = 0, j = 0;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	if (!size)
		return (NULL);
	for (i = 0; i < size; i++)
		if (str[i] != 32)
		{
			!s ? nw++ : 0;
			s = 1;
		}
		else
			s = 0;
	if (!nw)
		return (NULL);
	buf = malloc(sizeof(char *) * nw + 1);
	if (buf == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		if (str[i] != 32)
		{
			s = i;
			while (str[i] != 32 && str[i])
				i++;
			buf[j] = malloc(sizeof(char) * (i - s) + 2);
			while (str[s] != 32 && str[s])
			{
				buf[j][e] = str[s];
				s++;
				e++;
			}
			buf[j][e] = '\0';
			e = 0;
			j++;
		}
	buf[j] = NULL;
	return (buf);
}
