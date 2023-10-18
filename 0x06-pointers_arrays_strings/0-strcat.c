#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @src: The source string to concatenate to the destination.
 * @dest: The destination string.
 * Return: A pointer to the concatenated string (dest).
 */
char *_strcat(char *dest, char *src)
{
int destlen = 0;
int srclen = 0;
int i;

while (dest[destlen] != '\0')
{
destlen++;
}

while (src[srclen] != '\0')
{
srclen++;
}

for (i = 0; i <= srclen; i++)
{
dest[destlen + i] = src[i];
}

return (dest);
}
