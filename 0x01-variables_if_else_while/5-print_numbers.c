#include <stdio.h>

/**
 * main - entry point
 * prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 0;
do printf("%d", n++);
while (n % 10 == n);
printf("\n");
return (0);
}
