#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'z';
do putchar(c--);
while (c >= 'a');
putchar('\n');
return (0);
}
