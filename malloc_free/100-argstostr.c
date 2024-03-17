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
	int i, j = 0, size = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		j = 0;
	}
	buf = malloc(sizeof(char) * size + 1);
	if (buf == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		while (av[k][j])
		{
			buf[i] = av[k][j];
			i++;
			j++;
		}
		k++;
		j = 0;
		buf[i] = '\n';
		i++;
	}
	buf[i] = '\0';
	return (buf);
}
