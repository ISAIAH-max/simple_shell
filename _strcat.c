#include "simple_shell.h"

/**
 *_strcat-A function that concatinate a String
 *@dest:Concatinated String
 *@src:The String to be concatinated
 *Return:Pointer to the concatinated String
 */

char *_strcat(char *dest, const char *src)
{
	char *destTemp;
	const char *srcTemp;

	destTemp = dest;
	srcTemp =  src;

	while (*destTemp != '\0')
		destTemp++;

	while (*srcTemp != '\0')
		*destTemp++ = *srcTemp++;
	*destTemp = '\0';
	return (dest);
}
