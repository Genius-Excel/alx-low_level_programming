#include "main.h"
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define DELIMITER ' '
/**
* is_delimiter - this function cheks if a character is
* a delimiter
* @c: character to be checked
* Return: True if character is delimiter, False otherwise
*/
bool is_delimiter(char c)
{
	return (c == DELIMITER);
}

/**
* strtow - this slip strings into words
* @str: string array to be splitted
* Return: a pointer to th splitted words
*/

char **strtow(char *str)
{
	int word_count, i, index;

	char **word_arr;

	char *token;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	word_count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!(is_delimiter(str[i])) && (i == 0 || is_delimiter(str[i - 1])))
		{
			word_count++;
		}
	}
	word_arr = (char **)malloc((word_count + 1) * sizeof(char *));

	if (word_arr == NULL)
	{
		return (NULL);
	}
	token = strtok(str, " ");

	index = 0;

	while (token != NULL)
	{
		word_arr[index] = token;

		index++;
		token = strtok(NULL, " ");
	}
	word_arr[index] = NULL;

	return (word_arr);
}
