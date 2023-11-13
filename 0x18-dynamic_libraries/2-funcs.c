#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: destination of string
* @src: source of string
* Return: pointer to the destination string dest
*/

char *_strcat(char *dest, char *src)
{
	char *output = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;

		dest++;
		src++;
	}

	*dest = '\0';

	return (output);
}


/**
* _strncat - this function concatenate two strings
* without  taking the null byte into consideration
* @dest: destination string
* @src: source string
* @n: lenght of source string
* Return: pointer to the sestination string
*/

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}

/**
* _strncpy - copies the source string
* to the destination string
* @dest: destination string
* @src: source string
* @n: lenght of source string
* Return: pointer to the destination string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}


/**
* _strcmp - this fuction compares two strings
* @s1: first string
* @s2: second string
* Return: difference in both strings if any
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}


/**
* _memset - this functio fills the first n bytes of he memory
* appointed to s
* @s: memory to be assigned the constant byte
* @b: character
* @n: constant byte of unsigned integer
* Return: pointer to a memory s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (s == NULL)
	{
		return (NULL);
	}

	while (i < n)
	{
		s[i] = b;

		i++;
	}

	return (s);
}
