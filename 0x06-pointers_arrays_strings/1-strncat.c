#include "main.h"
#include <string.h>

/**
 * _strncat - Entry function
 * concatenates two strings
 * @dest: pointer to a char variable
 * @src: pointer to a char variable
 * @n: number of src char
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, destlen;
for (i = 0, destlen = strlen(dest); i < n && src[i] != '\0'; i++)
dest[destlen + i] = src[i];
dest[destlen + i] = '\0';
return (dest);
}
