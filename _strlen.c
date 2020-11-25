#include "simple_shell.h"

/**
 *_strlen- A function that returns the length of a String
 *@s: String used to get its length
 *Return: Length of the String
 */

int _strlen(const char *s)
{
	int length = 0;

	if (!s)
		return (length);
	for (length = 0; s[length]; length++)
	{
	}

	return (length);
}
