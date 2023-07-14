#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int m;
int b;
int v;

for (n = 48; n < 58; n++)
{
for (m = 48; m < 58; m++)
{
for (b = 48; b < 58; b++)
{
for (v = 48; v < 58; v++)
{
putchar(n);
putchar(m);
putchar(' ');
putchar(b);
putchar(v);
if (m != 58 && v < 58 && n != 58 && b != 58)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

