#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
* exit_func - this function exits the program and with a feddback
* and the exit process status code.
* @file_src: source file for which content is to be copied.
* @file_dst: destination of the file to which content is to be written.
* @argv: argument vector array.
* Return: void
*/

void exit_func(int file_src, int file_dst, char *argv[])
{
	if (file_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_dst == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
* main - this function copies the content of a file to a new file.
* @argc: argument count on command line.
* @argv: argument vector array count.
* Return: 0 for succes.
*/

int main(int argc, char *argv[]);

int main(int argc, char *argv[])
{
	int file_src, file_dst, abrt_close;

	ssize_t bytes_read, bytes_written;

	char buffer_arr[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_src = open(argv[1], O_RDONLY);

	file_dst = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND | 0664);

	exit_func(file_src, file_dst, argv);

	bytes_read = 1024;

	while (bytes_read == 1024)
	{
		bytes_read = read(file_src, buffer_arr, 1024);

		if (bytes_read == -1)
		{
			exit_func(-1, 0, argv);
		}

		bytes_written = write(file_dst, buffer_arr, bytes_read);

		if (bytes_written == -1)
		{
			exit_func(0, -1, argv);
		}
	}

	abrt_close = close(file_src);

	if (abrt_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_src);
		exit(100);
	}

	abrt_close = close(file_dst);

	if (abrt_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_dst);
		exit(100);
	}

	return (0);
}
