#include <stdio.h>

/**
 *main - display the alphabet
 *
 *return: always 0 
 *
 */

int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
