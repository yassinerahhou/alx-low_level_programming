#include "main.h"
/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: a NULL terminated string
 * Return: ack to 1 or -1
 * file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
int _f, _write, text_len = 0;

	if (!(filename))
	{
		return (-1);
	}
	_f = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (_f== -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[text_len])
		{
			text_len++;
		}
		_write = write(_f, text_content, text_len);
		if (_write == -1)
		{
			return (-1);
		}
	}
	close(_f);
	return (1);
}
