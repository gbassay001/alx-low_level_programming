#include <main.h>

/**
 *
 * starting point 
 *
 * print alphabet a - z ten times
 *
 * ending point: return 0 success
 */

void print_alphabet_x10(void)

{ 
	int i;

	char j;



	for (i = 0; i < 10; i++)
	
	{
				
	for (j = 'a'; j <= 'z'; j++)

	{

	_putchar(j);

	j++;
        }



	_putchar('\n');

	}



}

