#include <stdio.h>
#include<stdlib.h>

/**
 * main - entry point
 * prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1 = 0;
int num2 = 0;
do {
    do {
      putchar(num1 + '0');
      putchar(num2 + '0');
      putchar(',');
      putchar(' ');
    } while (++num2 % 10 == num2);
    num2 = 0;
} while (++num1 % 10 == num1);
putchar('\n');
return (0);
}
