/**
 * *_strcpy - Copies a string to dest
 * @dest: destination pointer
 * @src: source string
 * Return: A string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
