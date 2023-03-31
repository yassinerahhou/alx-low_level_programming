/**
 * leet - Entry point
 * @s: string
 * Return: string pointer
 */

char *leet(char *s)
{
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char num[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == letters[j] || (s[i] + 32) == letters[j])
			{
				s[i] = num[j];
				break;
			}
		}
	}
	return (s);
}
