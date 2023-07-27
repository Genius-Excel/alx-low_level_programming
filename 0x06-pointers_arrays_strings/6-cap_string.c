#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
* cap_string - capitalizes the first letter of each string
* @ltr: character to be capitalized
* Return: ltr 0(success)
*/

char *cap_string(char *ltr)
{
	int cap_text = 1;

	while (*ltr != '\0')
	{
		if (cap_text && islower(*ltr))
		{
			*ltr = toupper(*ltr);
		}
		if (*ltr == ' ' || *ltr == '\t' || *ltr == '\n' || *ltr == ','
			|| *ltr == ';' || *ltr == '.' || *ltr == '?' || *ltr == '!'
			|| *ltr == '"' || *ltr == '(' || *ltr == ')' || *ltr == '}'
			|| *ltr == '}')
		{
			cap_text = 1;
		}
		else
		{
			cap_text = 0;
		}
		ltr++;
	}
	return (ltr);
}
