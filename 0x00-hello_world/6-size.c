#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char _char;
int _int;
long int long_int;
long long int long_long_int;
float _float;

printf("Size of a char: %zu byte(s)\n", sizeof(_char));
printf("Size of an int: %zu byte(s)\n", sizeof(_int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long_int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long_long_int));
printf("Size of a float: %zu byte(s)\n", sizeof(_float));

return (0);
}
