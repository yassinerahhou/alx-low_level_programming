/**
 * _strncpy - Copies a string
 * @dest: destination pointer
 * @src: string to copy pointures
 * @n: number of bytes to copy
 * Return: a pointer to des
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
