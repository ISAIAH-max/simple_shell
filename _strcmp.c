#include "simple_shell.h"

/**
 *_strncmp- A function that compares two Strings
 *@s1:First String
 *@s2:Second String
 *@n:Size of the Firs n bits to be compared
 *Return: if different returns the difference in sizes
 *on failure it return -15(Error Code)
 */

int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	for (i = 0; s1[i] && s2[i] && i < n; i++)
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);

		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}

	if (i == n)
		return (0);

	else
		return (-15);
}
