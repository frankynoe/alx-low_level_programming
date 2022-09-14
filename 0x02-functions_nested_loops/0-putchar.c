#include <unistd.h>
#include "main.h"

/**
 *main - prints "_putchar on the screen"
 *
 *return: Always 0
 */
int main(void)
{
int i;
char word[] = "_putchar";
for (i = 0; i < 8; i++)
_putchar(word[i]);
 _putchar('\n');
return(0);
}
