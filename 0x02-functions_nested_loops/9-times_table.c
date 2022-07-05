#include "main.h"
/**
 *times_table - 9 times table
 *
 *Return: no return value
 *
 */
void times_table(void)
{
int i, j, product;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10;  j++)
{
product = i * j;
if (j == 0)
{
_putchar('0' + product);
}
else if (product >= 10)
{
_putchar(' ');
_putchar('0' + (product / 10));
_putchar('0' + (product % 10));
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(product + '0');
}
if (j != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
