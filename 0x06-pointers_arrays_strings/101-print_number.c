#include "main.h"

/**
 * print_number - print integers
 * @n: integer value.
 *
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int a, b, count, tmp, pow;

	a = n;
	pow = b = 1;

	if (n < 0)
	{
		a *= -1;
		_putchar('-');
	}

	tmp = a;

	while (tmp > 9)
	{
		b++;
		tmp /= 10;
	}

	for (count = 1; count < b; count++)
		pow *= 10;

	while (pow > 1)
	{
		_putchar((a / pow) % 10 + '0');
		pow = pow / 10;
	}
	_putchar(a % 10 + '0');
}

