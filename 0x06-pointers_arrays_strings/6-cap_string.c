/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 * Return: pointer to capitalized string
 */

char *cap_string(char *str)
{
	int i, j, sepLen;
	char sep[] = {'\t', '\n', 59, 46, 33, 34, 40, 41, '{', '}', 32, 44, 63};

	sepLen = sizeof(sep) / sizeof(sep[0]);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < sepLen; j++)
		{
			if ((i == 0 || str[i - 1] == sep[j]) && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				break;
			}
		}
	}
	return (str);
}
