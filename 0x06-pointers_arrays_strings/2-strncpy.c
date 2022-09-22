#include "main.h"
/**
 * *_strncat  - concatenates two strings
 * @dest: string to be apended
 * @src: string added
 * @n: number:wq
 *
 * Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;




	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
