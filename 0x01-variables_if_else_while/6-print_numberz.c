#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 0;
do putchar(n++ + '0');
while (n % 10 == n);
putchar('\n');
return (0);
}
