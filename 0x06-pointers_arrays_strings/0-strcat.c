#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: initial string
 * @src: appended string
 *
 * Return: concatinated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int marker = 0;

	while (*(dest + i))
	{
		marker++;
		i++;
	}
	for (i = 0; *(src + i); i++, marker++)
	{
		*(dest + marker) = *(src + i);
	}
	*(dest + marker) = '\0';
	return (dest);
}
