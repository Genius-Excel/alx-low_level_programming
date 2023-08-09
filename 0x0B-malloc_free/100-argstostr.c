#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* argstostr - this function concatenates the command
*  line arguments to a string
* @ac: argument count on the command line
* @av: argument vector array
* Return: a pointer to the concantenated string
*/

char *argstostr(int ac, char **av)
{
	int i, j, len, arr_index = 0;

	char *concat;

	len = 0;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len += 1;
		}
	}

	len += ac;

	concat = (char *)malloc((len + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concat[arr_index] = av[i][j];

			arr_index++;
		}
	}
	if (concat[arr_index] == '\0')
	{
		concat[arr_index++] = '\n';
	}
	return (concat);
}
