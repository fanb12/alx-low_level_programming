#include "main.h"
/**
  * print_alphabet_x10 - Entry point
  * Return: 0
  */
void print_alphabet_x10(void)
{
int j;
char d;
for (j = 1; j <= 10; j++)
{
for (d = 'a'; d <= 'z'; d++)
{
_putchar(d);
}
_putchar('\n');
}
}
