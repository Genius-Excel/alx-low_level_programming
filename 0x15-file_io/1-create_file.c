#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

/**
* create_file - this function creates a new file if it does not exist.
* @filename: name of the file to be created
* @text_content: content to be written in the file
* Return: 1 on success, -1 otherwise.
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t written_bytes;

	int fdp;

	int length;

	if (filename == NULL)
	{
		return (-1);
	}

	fdp = open(filename, O_CREAT | O_WRONLY | O_TRUNC | S_IRUSR | S_IWUSR);

	if (fdp == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		length = strlen(text_content);

		written_bytes = write(fdp, text_content, length);

		if (written_bytes == -1)
		{
			close(fdp);
			return (-1);
		}
	}
	close(fdp);

	if (chmod(filename, (S_IRUSR | S_IWUSR) == -1))
	{
		return (-1);
	}
	return (1);
}
