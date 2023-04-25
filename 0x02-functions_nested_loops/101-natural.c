#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry point
  *
  * Return: 0
  */
int main(void)
{
int g = 0;
int sum = 0;
while (g < 1024)
{
if (g % 3 == 0 || g % 5 == 0)
{
sum += g;
}
g++;
}
printf("%i\n", sum);
return (0);
}
