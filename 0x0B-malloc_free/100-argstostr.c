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
	int i, len, arr_len;

	char *concat;

	len = 0;

	arr_len = 0;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]) + 1;
	}

	concat = (char *)malloc((len + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		strcpy(concat +  arr_len, av[i]);
		arr_len += strlen(av[i]);

		concat[arr_len++] = '\n';
	}

	concat[arr_len] = '\0';

	return (concat);
}
