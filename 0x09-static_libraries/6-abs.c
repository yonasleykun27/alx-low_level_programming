#include "main.h"
/**
 *_abs - absolute value of a number.
 *@n: input.
 *
 *Return: absolute value
 *
 */
int _abs(int n)
{
if (n > 0)
{
n = n * 1;
}
if (n == 0)
{
n = 0;
}
if (n < 0)
{
n = n * -1;
}
return (n);
}
