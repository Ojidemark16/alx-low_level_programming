#include <stdio.h>

/**
 * main - Prints all possible combinations of two digit from 00 to 89
 * Return: Always 0 (success)
 */
int main(void)
{
int x, y;

for (x = 0; x < 9; x++)
{
for (y = 1; y < 10; y++)
{
putchar((x % 9) + '0');
putchar((y % 10) + '0');

if (x == 8 && y == 9)
continue;
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
