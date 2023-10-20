#include "main.h"
/**
 * _strcat - function name
 * @dest: function Parameter 1
 * @src: fucnction parameter 2
 * @n: function parameter 3
 */

char *_strncat(char *dest, char *src, int n)
{
int len = strlen(dest);
int i;

for (i = 0; i < n && *src != '\0'; i++)
{
dest[len + i] = *src;
src++;
}
dest[len + i] = '\0';
return (dest);

}
