#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>

/**
* exit_with_error - this function exits with error and the feedback with
* error status.
* @code: exit status
* @message: error message.
* Return: void.
*/

void exit_with_error(int code, const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(code);
}

/**
* display_elf_header_info - this function displays the info.
* @elf_header: the elf header file
* Return: void.
*/

void display_elf_header_info(const Elf64_Ehdr *elf_header);

void display_elf_header_info(const Elf64_Ehdr *elf_header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");

	printf("Class: %s\n", (elf_header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf("Data:  %s\n", (elf_header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "Unknown");
	printf("Version:  %d (current)\n", elf_header->e_ident[EI_VERSION]);
	printf("OS/ABI:  %s\n", (elf_header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Unknown");
	printf("ABI Version:  %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("Type:  %s\n", (elf_header->e_type == ET_EXEC) ? "EXEC (Executable file)" : "Unknown");
	printf("Entry point address:  0x%lx\n", (unsigned long)elf_header->e_entry);
}

/**
* main - this is the main function that displys the elf header info.
* @argc: argument count.
* @argv: argument vector array count.
* Return: 0 in success!.
*/

int main(int argc, char *argv[]);

int main(int argc, char *argv[])
{
	const char *file_name;

	int fd;

	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		exit_with_error(98, "Usage: elf_header elf_filename");
	}

	file_name = argv[1];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		exit_with_error(98, "Error: Unable to open file");
	}

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		exit_with_error(98, "Error: Unable to read ELF header");
	}

	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		exit_with_error(98, "Error: Not an ELF file");
	}

	display_elf_header_info(&elf_header);

	close(fd);
	return (0);
}

