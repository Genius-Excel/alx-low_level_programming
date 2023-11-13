#include "main.h"

/**
* _memcpy - this function copies the unsigned integer number
* of bytes from a the "src" to "dest" amd return the dest
* @dest: destination of the copies source from memory
* @src: source where the memory is to be copied
* @n: unsigned number of bytes
* Return: memory destination of the copied memory
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (src != NULL && i < n)
	{
		dest[i] = src[i];

		i++;
	}
	return (dest);
}


/**
* _strchr - checks the first occurence to a character
* then returns the pointer
* @s: pointer to be checked for the occurence of acharacter
* @c: character to be checked for its occurence
* Return: the values of the first occurent character
*/

char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}


/**
* _strspn - this function gets the length of a prefix
* substring and returns a number of byte
* @s: string to prefixed
* @accept: the string to accept the prefix
* Return: number of byte for the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if (s == NULL && accept == NULL)
	{
		return (0);
	}

	while (*s != '\0' && *s != '\n' && *s != '\t' && *s != ' ')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				len++;
				break;
			}
			ptr++;
		}
		if (*ptr == '\0')
		{
			break;
		}

		s++;
	}

	return (len);
}


/**
* _strpbrk - this function searches for any set of bytes
* @s: string to be searched
* @accept: string variable to store the set of bytes
* Return: the set of bytes found in the serach string
*/

char *_strpbrk(char *s, char *accept)
{
	if (s == NULL && accept == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (NULL);
}


/**
* _strstr - locates a sub string.
* @haystack: main string to be searched.
* @needle: sub string to be found.
* Return: pointer to the string if founcd esle NULL.
*/

char *_strstr(char *haystack, char *needle)
{
	(void)haystack;
	(void)needle;

	return (NULL);
}
