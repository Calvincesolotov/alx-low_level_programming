#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_Number1 - checks for the correct number of arguments
 * @argc: number of arguments
 * Return: always 0
 */
void check_Number1(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_Number2 - verifies if file_from exists and can be read
 * @check: confirms if true or false
 * @file: name of file(file_from)
 * @fd_from: file descriptor of file_from
 * @fd_to: file descriptor of file_to
 * Return: void
 */
void check_Number2(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check_Number3 - checks that file_to was created and/or can be written to
 * @check: checks if true or false
 * @file:file name(file_to)
 * @fd_from: file descriptor of file_from
 * @fd_to: file descriptor of file_to
 * Return: void
 */
void check_Number3(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check_Number4 - checks that file descriptors were closed properly
 * @check: checks if true or false
 * @fd: file descriptor
 *
 * Return: void
 */

void check_Number4(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: pointers passed to the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	check_Number1(argc);
	fd_from = open(argv[1], O_RDONLY);
	check_Number2((ssize_t)fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check_Number3((ssize_t)fd_to, argv[2], fd_from, -1);
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(fd_from, buffer, 1024);
		check_Number2(lenr, argv[1], fd_from, fd_to);
		lenw = write(fd_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		check_Number4(lenw, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	check_Number4(close_to, fd_to);
	check_Number4(close_from, fd_from);
	return (0);
}
