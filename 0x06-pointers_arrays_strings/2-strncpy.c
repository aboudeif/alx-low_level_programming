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
char *srcPtr = src;
int i;   
for (i = 0; i < n; i++)
dest[i] = *srcPtr++;
return (dest);
}
