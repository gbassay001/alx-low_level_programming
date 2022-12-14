#include <main.h>

/**
 *
 * starting point 
 *
 * print alphabet a - z ten times
 *
 */

void print_alphabet_x10(void)

{
	int j;
	int i;

	for (j = 'a'; j <= 'z'; j++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(j);
		}
		_putchar('\n');

}
