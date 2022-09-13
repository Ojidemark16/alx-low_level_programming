#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @x: single letter input
 * Return: 1 if int x is lowercase, 0 if otherwise
 */
int _islower(int x)
{
if (x >= 'a' && x <= 'z')
return (1);
else
return (0);
}
