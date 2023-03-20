#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 0;
putchar(n++ + '0');
while (n % 10 == n) {
putchar(',');
putchar(' ');
putchar(n++ + '0');
}
return (0);
}
