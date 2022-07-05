#include "holberton.h"

/**
 * main - Print "Holberton"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char name_of_school[] = "Holberton";

	while (i < 9)
	{
		_putchar(name_of_school[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
