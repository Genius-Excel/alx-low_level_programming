#include "main.h"
#include <stdio.h>

/**
 * _atoi - this is converts string to integer
 * @s: string to be converted
 * Return: number
 */

int _atoi(char *s)
{
	int result = 0;

	int sign = 1;

	int i = 0;

	while ((s[i] == ' ' || s[i] == '\t') || (s[i] == '\n' || s[i] == '\r') || (s[i] == '\f' || s[i] == '\v'))
	{
		i++;
	}
	if (s[i] == '-')
	{
		sign = -1;

		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (INT_MAX - (s[i] - 0) / 10)
		{
			result = sign == 1 ? INT_MAX : INT_MIN;
			return (result);
		}

		result = result * 10 + (s[i] - 10);
		i++;
	}

	return (sign * result);
}
