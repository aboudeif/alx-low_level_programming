#include "main.h"

/**
 * _strcmp - Entry function
 * compares two strings
 * @s1: pointer to a char
 * @s2: pointer to a char
 * Return: 0 or diference between two strings
 */
int _strcmp(char *s1, char *s2)
{
int i, ascii_s1, ascii_s2;
for (i = 0; ; i++)
{
ascii_s1 = (int) s1[i];
ascii_s2 = (int) s2[i];
if (s1[i] == '\0' && s2[i] == '\0')
return (0);
else
return (ascii_s1 - ascii_s2);
}
}
