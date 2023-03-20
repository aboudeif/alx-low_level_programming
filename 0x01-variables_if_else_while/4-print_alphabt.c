#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'a';
do if(c != 'q' && c != 'e') putchar(c++);
while (c <= 'z');
putchar('\n');
return (0);
}
