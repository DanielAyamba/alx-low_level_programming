#include "main.h"
#include <stdlib.h>
/**
 * argstostr - convert the params passed to the program to string
 * @ac: the argument count
 *@av: the argument vector
 * Return: ...
 */
char *argstostr(int ac, char **av)
{
int ch = 0, i = 0, j = 0, k = 0;
char *s;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
ch++;
}
}

s = malloc((sizeof(char) * ch) + ac + 1);
if (s == NULL)
return (NULL);

i = 0;
k = 0;
while (i < ac)
{
j = 0;
while (av[i][j])
{
s[k] = av[i][j];
k++;
j++;
}
s[k] = '\n';
k++;
i++;
}
s[k] = '\0';

return (s);
}
