#include "main.h"

/**
 * append_text_to_file - appends text at the end
 * @filename: file name
 * @text_content: the NULL of context
 * Return: back to 1 if else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
int _f, _w, text_len = 0;

	if (!(filename))
	{
		return (-1);
	}
	_f = open(filename, O_WRONLY, O_APPEND);
	if (_f == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[text_len])
		{
			text_len++;
		}
		_w = write(_f, text_content, text_len);
		if (_w == -1)
		{
			return (-1);
		}
	}
	close(_f);
	return (1);
}
