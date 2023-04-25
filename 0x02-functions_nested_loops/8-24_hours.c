#include "main.h"
/**
  * jack_bauer - Entry point
  *
  * Return: 0
  */
void jack_bauer(void)
{
int l;
int k;
for (l = 0; l <= 23; l++)
{
for (k = 0; k <= 59; k++)
{
_putchar(l / 10 + '0');
_putchar(l % 10 + '0');
_putchar(':');
_putchar(k / 10 + '0');
_putchar(k % 10 + '0');
_putchar('\n');
}
}
}
