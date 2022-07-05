#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - natural numbers from n to 98.
 *@n: input.
 *
 *Return: void.
 *
 */
void print_to_98(int n)
{
if (n == 98)
{
printf("%d\n", n);
}
else if (n < 98)
{
int j;
for (j = n; j < 99; j++)
{
if (j == 98)
{
printf("%d\n", 98);
}
else
{
printf("%d, ", j);
}
}
}
else if (n > 98)
{
int j;
for (j = n; j > 97; j--)
{
if (j == 98)
{
printf("%d\n", j);
}
else
{
printf("%d, ", j);
}
}
}
}
