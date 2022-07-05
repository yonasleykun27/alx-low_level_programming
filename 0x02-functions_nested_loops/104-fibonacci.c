#include <stdio.h>
/**
 *main - print first 98 fibonacci
 *
 *Return: 0 always.
 */
int main(void)
{
unsigned long int a = 1, b = 2, c, k, p, l, o, m, u, d, i;
c = a + b;
printf("%lu, %lu, ", a, b);
d = 3;
while (d < 89)
{
printf("%lu, ", c);
a = b;
b = c;
c = a + b;
d++;
}
l = b / 1000000000;
o = b % 1000000000;
m = c / 1000000000;
u = c % 1000000000;
for (i = 89; i < 98; i++)
{
printf("%lu%lu, ", m, u);
k = l;
p = o;
l = m;
o = u;
m = k + l + ((p + o) / 1000000000);
u = (p + o) % 1000000000;
}
printf("%lu%lu\n", m, u);
return (0);
}
