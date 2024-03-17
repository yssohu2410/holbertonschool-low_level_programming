#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - fills memory
 * @ac: str
 * @av: str
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *buf;
	int i, j;

	if (ac == 0 || av == NULL)
		return (NULL);
	buf = malloc(sizeof(char) * ac + 1);
	if (buf == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		buf[i] = malloc(sizeof(int) * width);
		if (buf[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(buf[j]);
			free(buf);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			buf[i][j] = 0;
		}
	}
	return (buf);
}
