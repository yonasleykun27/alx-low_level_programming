#include "main.h"
/**
  *factorial - returns factorial of a given number.
  *@n: number to find  factorial of.
  *
  *Return: factorial of number
  *-1 if n < 0.
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
