#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

/**
 * main - entry point
 * prints the alphabet in lowercase, and then
 * in uppercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'a', C = 'A';
do putchar(c++);
while (c <= 'z');
do putchar(toupper(C++));
while (C <= 'Z');
putchar('\n');
return (0);
}
