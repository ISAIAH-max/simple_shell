#include "simple_shell.h"

/**
 *_strcpy- A function that returns a copied String
 *@dest: A pointer to the compied String
 *@src: Pointer to the String to be copied
 *Return: A ponter to the copied String
 */
char *_strcpy(char *dest, const char *src)
{
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
