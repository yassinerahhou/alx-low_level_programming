#include "main.h"

/**
 * append_text_to_file - appends text
 * @filename: name of the file
 * @text_content: the NULL terminated string to add
 * Return: back to 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
int _f, _write, text_len = 0;
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
_write = write(_f, text_content, text_len);
if (_write == -1)
{
return (-1);
}
}
close(_f);
return (1);
}
