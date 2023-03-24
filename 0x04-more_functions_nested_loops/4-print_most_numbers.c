#include "main.h"
/**
 * print_most_numbers -Entry function
 * prints the numbers, from 0 to 9
 * Return: never return anything
 */
void print_most_numbers(void)
{
int n = 0;
while (n <= 9)
{
if (n != 2 && n != 4)
continue;
_putchar (n++ + '0');
}
_putchar('\n');
}
