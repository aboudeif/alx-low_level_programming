#include "main.h"

/**
 * print_sign - entry function
 * prints the sign of a number
 * @n: a number to check it's sign
 * Return: 1 if the sign of a number is positive
 * or -1 if the sign of a number is negative or otherwise 0
 */
int print_sign(int n)
{
return (n != 0 ? n > 0 ? 1 : -1 : 0);
}
