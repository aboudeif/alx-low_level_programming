#include "main.h"
/**
 * print_alphabet_x10 - entry function
 * prints 10 times the alphabet, in lowercase
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i = 0;
char c;
do {
c = 'a';
do _putchar(c++);
while (c <= 'z');
_putchar('\n');
i++;
} while (i < 10);
}
