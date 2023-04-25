#include "main.h"
/**
  * print_times_table - Entry point
  * @n: times table to use
  * Return: 0
  */
void print_times_table(int n)
{
int e = 0, rep, f;
if (n < 0 || n > 15)
return;
while (e <= n)
{
for (e = 0; f <= n; f++)
{
rep = e * f;
if (f == 0)
_putchar('0' + rep);
else if (rep < 10)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + rep);
}
else if (rep < 100)
{
_putchar(' ');
_putchar('0' + rep / 10);
_putchar('0' + rep % 10);
}
else
{
_putchar('0' + rep / 100);
_putchar('0' + (rep - 100) / 10);
_putchar('0' + rep % 10);
}
if (f < n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
e++;
}
}
