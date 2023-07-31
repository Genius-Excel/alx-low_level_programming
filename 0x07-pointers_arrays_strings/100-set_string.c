#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* set_string - this function sets the value of a pointer to char
* @s : string to be checked
* @to: value character
* Return: void
*/

void set_string(char **s, char *to)
{
	if (*s != NULL)
	{
		free(*s);
	}

	*s = (char *)malloc((strlen(to) + 1) * sizeof(char));

	if (*s != NULL)
	{
		strcpy(*s, to);
	}
}
