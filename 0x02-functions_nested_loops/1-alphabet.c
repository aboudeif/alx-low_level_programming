#include "main.h"
/**
 * print_alphabet - entery function
 * prints the alphabet, in lowercase
 * Return: Always (0).
 */
void print_alphabet(void)
{
char c = 'a';
do _putchar(c++);
while (c <= 'z');
_putchar('\n');
}
