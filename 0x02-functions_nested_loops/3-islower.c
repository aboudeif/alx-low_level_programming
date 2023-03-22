#include "main.h"

/**
 * _islower - entry function
 * checks for lowercase character
 * Input: @c: character to check
 * Return: 1 if character is lowercase or otherwise 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
