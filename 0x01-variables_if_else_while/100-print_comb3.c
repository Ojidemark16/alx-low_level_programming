#include <stdio.h>

/**
 * main - Prints all possible combinations of two digit from 00 to 99
 * Return: Always 0 (success)
 */
int main(void)
{
int x, y;

for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
putchar((x % 10) + '0');
putchar((y % 10) + '0');

if (x == 9 && y == 9)
continue;
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
