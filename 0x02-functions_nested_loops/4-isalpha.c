#include "main.h"

/**
 * _isalpha - entry function
 * checks for alphabetic character
 * @c: character to check it's an alphabet
 * Return: 1 if character is alphbet or otherwise 0
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
return (0);
}
