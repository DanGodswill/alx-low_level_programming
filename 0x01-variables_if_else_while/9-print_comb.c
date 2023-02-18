#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
* Return: Always 0 (success)
*/
int main(void)
{
int i = 0;

while (i < 100)
{
if (i / 10 < i % 10)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
if (i < 89)
{
putchar(',');
putchar(' ');
}
}
i++;
}
putchar('\n');
return (0);
}
