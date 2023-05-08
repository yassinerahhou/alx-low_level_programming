#include "main.h"

/**
 * read_textfile - read a file text and print it
 * @letters: the number of letters
 * @filename:  Name of  the file
 * Return: the actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int _open, _read, _write;
char *b = malloc(sizeof(char)  * letters);
if (!(b))
{
free(b);
return (0);
}
if (!(filename))
{
return (0);
}
_open = open(filename, O_RDONLY);
_read = read(_open, b, letters);
_write = write(STDOUT_FILENO, b, _read);

if (_open == -1 || _read == -1 || _write == -1 || !(_write == _read))
{
free(b);
return (0);
}
free(b);
close(_open);
return (_write);
}
