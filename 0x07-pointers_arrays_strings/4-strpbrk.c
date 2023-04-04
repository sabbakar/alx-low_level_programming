/**
 * _strpbrk - searches for any of a set of bytes
 * @s: pointer to the string to be searched
 * @accept: pointer to the set of bytes to search for
 *
 * Return: pointer to the first occurrence of a byte from
 * accept in s
 */
char *_strpbrk(char *s, char *accept)
{char *ptr = accept;

	while (*s != 0)
	{
		if (*s == *ptr && *ptr != 0)
			return (s);
		ptr++;
		if (*ptr == 0)
		{
			ptr = accept;
			s++;
		}
	}
	return (0);
}
