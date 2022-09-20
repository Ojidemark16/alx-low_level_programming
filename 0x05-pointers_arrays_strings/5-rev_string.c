#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
int i, j, k;
char *a, b;

a = s;

while (s[j] != '\0')
{
j++;
}

for (k = 1; k < j; k++)
{
a++;
}

for (i = 0; i < (j / 2); i++)
{
b = s[i];
s[i] = *a;
*a = b;
a--;
}
}

