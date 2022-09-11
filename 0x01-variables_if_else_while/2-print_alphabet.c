#include <stdio.h>
/**
 *main - display the alphabet
 *
 *return 0 if no error
 *
 */

int main(void)
{
  char a;

  for (a = 'a'; a <= 'z'; a++)
    putchar(a);
  putchar('\n');
  return (0);
}
