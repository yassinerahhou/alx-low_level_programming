#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: argument coun argst
 * @argv: argument vectorargv
 * Return: always back to 0
 */

int main(int argc, char *argv[])
{
	int _f1, _f2, _r, c1, c2;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	_f1 = open(argv[1], O_RDONLY);
	if (_f1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	_f2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((_r = read(_f1, buffer, 1024)) > 0)
	{
		if (_f2 < 0 || (write(_f2, buffer, _r) != _r))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	c1 = close(_f1);
	if (c1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", _f1), exit(100);
	}
	c2 = close(_f2);
	if (c2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", _f2), exit(100);
	}
	return (0);
}
