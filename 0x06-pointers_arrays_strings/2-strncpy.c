#include "main.h"

/**
 * _strncpy - Entry function
 * copies a string
 * @dest: pointer to dest char
 * @src: pointer to src char
 * @n: number of src to copy to dest
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (src[i] != 0 && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = 0;
i++;
}
return (dest);
}
