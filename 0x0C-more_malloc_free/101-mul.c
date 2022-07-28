#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
char *xarray(int size);
char *_zero_iteration(char *s);
int convert_to_digit(char s);
void _product(char *prod, char *mul, int digit, int zeroes);
void nums_add(char *final_prod, char *next_prod, int next_len);

/**
 *_strlen - length of string
 *
 *@s:string
 *
 *Return:string length
 *
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 *xarray - creates an array and initializes its value to x plus terminating
 *null byte
 *@size:size of array to be initialised
 *Return:pointer to array
 */
char *xarray(int size)
{
	int i;
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		exit(98);
	}
	for (i = 0; i < (size - 1); i++)
	{
		arr[i] = 'x';
	}
	arr[i] = '\0';
	return (arr);
}
/**
 *_zero_iteration - iterates thru a given no. of zeroes
 *
 *@s:string to be iterated
 *Return:pointer to next non-zero element
 */
char *_zero_iteration(char *s)
{
	while (*s && *s == '0')
	{
		s++;
	}
	return (s);
}
/**
 *convert_to_digit - converts digit character to int
 *
 *@s:digit character
 *
 *Return:converted int
 *
 */
int convert_to_digit(char s)
{
	int digit = s - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (digit);
}
/**
 *_product - multiplies string of numbers by a single digit
 *
 *@prod:buffer to store result
 *@mul:string of no.
 *@digit:single digit
 *@zeroes:leading zeroes
 *
 *Return:void
 */
void _product(char *prod, char *mul, int digit, int zeroes)
{
	int mul_len, num, tens = 0;

	mul_len = _strlen(mul) - 1;
	mul += mul_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}
	for (; mul_len >= 0; mul_len--, prod--, mul--)
	{
		if (*mul < '0' || *mul > '9')
		{
			printf("Error\n");
			exit(98);
		}
		num = (*mul - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens)
	{
		*prod = (tens % 10) + '0';
	}
}
/**
 *nums_add - adds numbers stored in two strings
 *
 *@final_prod:final product buffer
 *@next_prod :next product to be added
 *@next_len:length of next prod
 *
 *Return:void
 */
void nums_add(char *final_prod, char *next_prod, int next_len)
{
	int num, tens;

	tens = 0;
	while (*(final_prod + 1))
	{
		final_prod++;
	}
	while (*(next_prod + 1))
	{
		next_prod++;
	}
	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;
		next_prod--;
		next_len--;
	}
	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;
		final_prod--;
		next_prod--;
	}
	if (tens)
	{
		*final_prod = (tens % 10) + '0';
	}
}
/**
 *main - multiplies two positive numbers and prints the result
 *
 *@argc:arguement count
 *@argv:arguement vector
 *Return:(0- success)
 */
int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int i, size, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (*(argv[1]) == '0')
	{
		argv[1] = _zero_iteration(argv[1]);
	}
	if (*(argv[2]) == '0')
	{
		argv[2] = _zero_iteration(argv[2]);
	}
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}
	size = _strlen(argv[1]) + _strlen(argv[2]);
	final_prod = xarray(size + 1);
	next_prod = xarray(size + 1);

	for (i = _strlen(argv[2]) - 1; i >= 0; i--)
	{
		digit = convert_to_digit(*(argv[2] + i));
		_product(next_prod, argv[1], digit, zeroes++);
		nums_add(final_prod, next_prod, size - 1);
	}
	for (i = 0; final_prod[i]; i++)
	{
		if (final_prod[i] != 'x')
		{
			putchar(final_prod[i]);
		}
	}
	putchar('\n');
	free(next_prod);
	free(final_prod);
	return (0);
}
