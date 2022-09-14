#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 * @x: single letter input
 * Return: 1 if c is a letter (lower or uppercase), 0 otherwise
 */
int _isalpha(int x)
{
if (((x >= 'a') && (x <= 'z')) || ((x >= 'A') && (x <= 'Z')))
return (1);
else
return (0);
}
