#include "main.h"
#include <stddef.h>

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
