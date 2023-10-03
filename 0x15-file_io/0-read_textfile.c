#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

/**
* read_textfile - this function reads the content of a file.
* @filename: name of the file to be read.
* @letters: number of letters to be read an printed.
* Return: the number of letters read.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file_ptr;

	char content[1024];

	ssize_t read_bytes;

	ssize_t written_bytes;

	if (filename == NULL)
	{
		return (0);
	}

	file_ptr = fopen(filename, "r");

	if (file_ptr == NULL)
	{
		return (0);
	}

	read_bytes = fread(content, 1, letters, file_ptr);

	if (read_bytes <= 0)
	{
		fclose(file_ptr);
		return (0);
	}

	written_bytes = write(STDOUT_FILENO, content, read_bytes);

	if (read_bytes != written_bytes)
	{
		fclose(file_ptr);
		return (0);
	}

	fclose(file_ptr);
	return (read_bytes);

}
