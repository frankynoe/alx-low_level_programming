#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int single_digit = 0;
while (single_digit <= 9)
{
putchar(single_digit);
single_digit++;
}
putchar('\n');
return(0);
}
