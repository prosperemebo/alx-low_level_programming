#include "main.h"
#define BUF_SIZE 1024

/**
 * main - Copies the content of a file to another file
 *
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: 0 on success, otherwise:
 *         - 97 if incorrect number of arguments
 *         - 98 if file_from cannot be read
 *         - 99 if file_to cannot be created or written to
 *         - 100 if fd cannot be closed
 */

int main(int ac, char **av)
{
	int fd_from, fd_to, read_count, write_count;
	char buf[BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((read_count = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		write_count = write(fd_to, buf, read_count);
		if (write_count != read_count || write_count == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}

	if (read_count == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
