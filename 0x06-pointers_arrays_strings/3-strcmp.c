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
int i = 0;
int dif = 0;
while (s1[i] != 0 && s2[i] != 0)
{
dif = s1[i] - s2[i];
if (dif != 0)
break;
i++;
}
return (dif);
}
