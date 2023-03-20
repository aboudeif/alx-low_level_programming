#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 0;
do putchar((n > 9) ? n + 'W' : n + '0');
while (++n < 16);
putchar('\n');
return (0);
}
