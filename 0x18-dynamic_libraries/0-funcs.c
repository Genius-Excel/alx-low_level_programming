#include "main.h"

/**
* _putchar - this function prints to stdout.
* @c: character to be printed.
* Return: printed character.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _islower - this function checks for lowercase character.
* @c: character to be checked.
* Return: 1 if lower case else 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


/**
* _isalpha - checks for uppercase
* @c: character to be checked
* Return: 1 if c is a letter, 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


/**
* _abs - outputs absolute value
* @n: value to be calculated
* Return: absolute value
*/

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}


/**
* _isupper - checks for uppercase
* @c: character to be checked
* Return: 1 if c is uppercase, 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
