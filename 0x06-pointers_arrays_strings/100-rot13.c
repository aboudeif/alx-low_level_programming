#include "main.h"

/**
 * rot13 - rot13 encoding
 * encodes a string using rot13
 * Return: pointer to arr
 * @s: string
 */
char *rot13(char *s)
{
char half1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char half2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
int i = 0, j;
while (s[i] != 0)
{
char c = s[i++];
for (j = 0; j < 52; j++)
{
if (c == half1[j])
s[i-1] = half2[j];
}
}
return (s);
}
