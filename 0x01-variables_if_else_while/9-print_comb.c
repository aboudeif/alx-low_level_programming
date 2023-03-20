#include <stdio.h>
#include<stdlib.h>

/**
 * main - entry point
 * prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 0, n2 = 0;
do {
    do {
      putchar(n + '0');
      putchar(n2 + '0');
      putchar(',');
      putchar(' ');
    } while (++n2 % 10 == n2);
    n2 = 0;
} while (++n % 10 == n);
putchar('\n');
return (0);
}
