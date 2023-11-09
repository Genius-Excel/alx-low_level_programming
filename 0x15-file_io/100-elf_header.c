#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
* cstm_strncmp - This function comapares two given string
* to check if both strings are identical.
* @str1: first string to be compared with the next.
* @str2: second string to be compared with the first string.
* @n: maximum number of bytes to be read and compared in both strings.
* Return: This function returns 0 if both strings are identical.
*/

int main(int argc, const char *argv[]);

int cstm_strncmp(const char *str1, const char *str2, size_t n)
{
	for (; n && *str1 && *str2; --n, ++str1, ++str2)
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
	}

	if (n)
	{
		if (*str1)
		{
			return (1);
		}

		if (*str2)
		{
			return (-1);
		}
	}
	return (0);
}

/**
* _close - this function acts like the kernel function for a file dsecriptor.
* @file_dp: file descri[tor pointer.
*/

void _close(int file_dp)
{
	if (close(file_dp) != -1)
	{
		return; /*function executed successfully*/
	}

	write(STDERR_FILENO, "Error: Can't close file_dp\n", 22);

	exit(98);
}

/**
* _read - this function works like the red function.
* @file_dp: File descriptor pointer to be read from.
* @buffer: buffer pointer.
* @counter: number of bytes to be read.
*/

void _read(int file_dp, char *buffer, size_t counter)
{
	if (read(file_dp, buffer, counter) != -1)
	{
		return;
	}
	write(STDERR_FILENO, "Error: Can't read from file\n", 28);
	_close(file_dp);
	exit(98);
}

/**
* elf_magic - this function prints th ELF magic info.
* @buffer: pointer to the ELF Header.
*/

void elf_magic(const unsigned char *buffer)
{
	unsigned int i;

	if (cstm_strncmp((const char *)buffer, ELFMAG, 4))
	{
		write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
		exit(98);
	}

	printf("ELF Header:\n Magic:	");

	for (i = 0; i < 16; ++i)
	{
		printf("%02x%c", buffer[i], i < 15 ? ' ' : '\n');
	}
}


/**
* elf_class - this function prints th ELF class info.
* @buffer: pointer to the ELGF Header.
* Return: Bit mode.
*/

size_t elf_class(const unsigned char *buffer)
{
	printf(" %-34s ", "Class:");

	if (buffer[EI_CLASS] == ELFCLASS64)
	{
		printf("ElF64\n");

		return (64);
	}

	if (buffer[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");

		return (32);
	}

	printf("<unknown: %x>\n", buffer[EI_CLASS]);

	return (32);
}

/**
* elf_data - this function prints the ELF data info.
* @buffer: pointer to the ELF Header.
* Return: 1 if endian else 0.
*/

int elf_data(const unsigned char *buffer)
{
	printf(" %-34s ", "Data:");

	if (buffer[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");

		return (1);
	}

	if (buffer[EI_DATA] == ELFDATA2LSB)
	{
		printf("2;s complement, little endian\n");

		return (0);
	}

	printf("Invalid data encoding\n");
	return (0);
}

/**
* elf_version - prints the ELF version info.
* @buffer: pointer to the ELF Header.
*/

void elf_version(const unsigned char *buffer)
{
	printf(" %-34s %u", "Version:", buffer[EI_VERSION]);

	if (buffer[EI_VERSION] == EV_CURRENT)
	{
		printf(" (current)\n");
	}
	else
	{
		printf("\n");
	}
}


/**
* elf_osabi - this function prints the ELF OS info.
* @buffer: pointer to the ELF Header.
*/

void elf_osabi(const unsigned char *buffer)
{
	const char *os_table[19] = {
	"UNIX - System V",
	"UNIX - HP-UX",
	"UNIX - NetBSD",
	"UNIX - GNU",
	"<unknown: 4>",
	"<unknown: 5>",
	"UNIX - Solaris",
	"UNIX - AIX",
	"UNIX - IRIX",
	"UNIX - FreeBSD",
	"UNIX - Tru64",
	"Novell - Modesto",
	"UNIX - OpenBSD",
	"VMS - OpenVMS",
	"HP - Non-Stop Kernel",
	"AROS",
	"FenixOS",
	"Nuxi CloudABI",
	"Stratus Technologies OpenVOS"
	};

	printf(" %-34s ", "OS/ABI:");

	if (buffer[EI_OSABI] < 19)
	{
		printf("%s\n", os_table[(unsigned int)buffer[EI_OSABI]]);
	}
	else
	{
		printf("<unknown: %x>\n", buffer[EI_OSABI]);
	}
}

/**
* elf_abivers - this function prints the ELF ABI version info.
* @buffer: pointer to the ELF Header.
*/

void elf_abivers(const unsigned char *buffer)
{
	printf(" %-34s %u\n", "ABI Version:", buffer[EI_ABIVERSION]);
}

/**
* elf_type - this function prints the ELF type info.
* @buffer: pointer to the ELF Header.
* @big_endian: endianess.
*/

void elf_type(const unsigned char *buffer, int big_endian)
{
	char *type_table[5] = {
	"NONE (No file type)",
	"REL (Relocatable file)",
	"EXEC (Executable file)",
	"DYN (Shared object file)",
	"CORE (Core file)"
	};

	unsigned int type;

	printf(" %-34s ", "Type:");

	if (big_endian)
	{
		type = 0x100 * buffer[16] + buffer[17];
	}
	else
	{
		type = 0x100 * buffer[17] + buffer[16];
	}

	if (type < 5)
	{
		printf("%s\n", type_table[type]);
	}
	else if (type >= ET_LOOS && type <= ET_HIOS)
	{
		printf("OS Specific: (%4x)\n", type);
	}
	else if (type >= ET_LOPROC && type <= ET_HIPROC)
	{
		printf("Processor Specific: (%4x)\n", type);
	}
	else
	{
		printf("<unknown: %x>\n", type);
	}
}

/**
* elf_entry - this function prints the entry pint info.
* @buffer: string containing the entry point.
* @bit_mode: bit mode.
* @big_endian: endianness.
*/

void elf_entry(const unsigned char *buffer, size_t bit_mode, int big_endian)
{
	int role = bit_mode / 8;

	printf(" %-34ss 0x", "Entry point address:");

	if (big_endian)
	{
		while (role && !*(buffer))
		{
			--role, ++buffer;
		}

		printf("%x", *buffer & 0xff);

		while (--role > 0)
			printf("%02x", *(++buffer) & 0xff);
	}
	else
	{
		buffer += role;

		while (role && !*(--buffer))
			--role;

		printf("%x", *buffer & 0xff);

		while (--role > 0)
			printf("%02x", *(--buffer) & 0xff);
	}
	printf("\n");
}

/**
* main - this is the main function for efl header.
* @argc: argument command line count.
* @argv: argument vector command line count.
* Return: 0 on success.
*/

int main(int argc, const char *argv[])
{
	unsigned char buffer[20];

	unsigned int marn;

	int mole;

	int mt;

	if (argc < 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}

	mt = open(argv[1], O_RDONLY);

	if (mt == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file\n", 28);
		exit(98);
	}

	_read(mt, (char *)buffer, 20);

	elf_magic(buffer);
	marn = elf_class(buffer);
	mole = elf_data(buffer);
	elf_version(buffer);
	elf_osabi(buffer);
	elf_abivers(buffer);
	elf_type(buffer, mole);

	lseek(mt, 24, SEEK_SET);

	_read(mt, (char *)buffer, marn / 8);

	elf_entry(buffer, marn, mole);

	_close(mt);

	return (0);
}
