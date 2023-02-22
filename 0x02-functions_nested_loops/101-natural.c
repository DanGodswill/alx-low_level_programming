#include <stdio.h>

/**
* main - Prints natural numbers below 1024 that are
* multiplies of 3 or 5
*
* Return: Always 0.
*/
int main(void)
{
  int i, z = 0;

  while (i < 1024)
  {
    if ((i % 3 == 0) || (i % 5 == 0))
{
z += i;
  }
i++;
}
  printf("%d\n", n);
  return (0);
}
