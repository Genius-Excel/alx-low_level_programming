#include "main.h"
#include <stdio.h>
#include <limits.h>

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

	while (s[i] != '\0')
	{
		i++;
	}
	if (s[i] == '-')
	{
		sign = -sign;

		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (result > (INT_MAX - (*s - 0) / 10))
		{
			result = sign == 1 ? INT_MAX : INT_MIN;
			return (result);
		}

		result = result * 10 + (*s - 10);
		s++;
	}

	return (sign * result);
}
