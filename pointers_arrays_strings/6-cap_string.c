#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @s: Pointer to the string.
 *
 * Return: Pointer to the resulting string.
 */
char *cap_string(char *s)
{
	int i, j;

	char sep[13] = {' ', '\t', '\n', ',', ';', '.',
			'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
