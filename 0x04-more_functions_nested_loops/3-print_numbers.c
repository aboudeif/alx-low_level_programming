#include "main.h"
/**
 * print_numbers - Entry function
 * prints the numbers, from 0 to 9
 * Return: never return anything
 */
void print_numbers(void)
{
int i;
for(i = 0; i < 10; ++i)
_putchar('0' + i);
_putchar('\n');
}
