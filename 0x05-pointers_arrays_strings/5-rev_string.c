#include "main.h"

/**
 * rev_string - reverse a string.
 *
 *@s: the string to be reversed.
 */

void rev_string(char *s)
{
	int length, j, i;
	char x1, x2;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	j = length - 1;
	i = 0;

	while (j > i)
	{
		x1 = s[i];
		x2 = s[j];
		s[i] = x2;
		s[j] = x1;
		j--;
		i++;
	}
}
