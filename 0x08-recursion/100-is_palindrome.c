#include "main.h"
#include <string.h>

/**
* palindrome_function - this function is an helper
* function that checks for the palindrome in a string
* @s: string array
* @start: start of the array
* @end: end of the array
* Return: palindrome function recursively
*/

int palindrome_function(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}
	return (palindrome_function(s, (start + 1), (end - 1)));
}

/**
* is_palindrome - functions checks for a palindrome
* in the string
* @s: string array
* Return: the plindrom string output 1 0 otherwise
*/

int is_palindrome(char *s)
{
	int len;

	len = strlen(s);

	if (len == 0)
	{
		return (1);
	}
	return (palindrome_function(s, 0, (len - 1)));
}
