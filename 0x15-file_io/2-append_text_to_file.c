#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
* append_text_to_file - this function adds a text to the end of the file.
* @filename: name of the file.
* @text_content: the text to be writte to the file.
* Return: 1 on success -1 for otherwise.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fdp;

	ssize_t written_bytes;

	int length;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	fdp = open(filename, O_WRONLY | O_APPEND | O_CREAT | S_IRUSR | S_IWUSR);

	if (fdp == -1)
	{
		return (-1);
	}

	length = strlen(text_content);

	written_bytes = write(fdp, text_content, length);

	if (written_bytes == -1)
	{
		close(fdp);
		return (-1);
	}

	close(fdp);

	return (1);
}

