/**
 * _strcmp - Compares two strings
 * @s1: string 1
 * @s2: string 
 * Return: Integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, cmpVal = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		cmpVal += (s1[i] - s2[i]);
		if (cmpVal != 0)
		{
			break;
		}
	}
	if (cmpVal == 0)
	{
		cmpVal = s1[i] - s2[i];
	}
	return (cmpVal);
}
