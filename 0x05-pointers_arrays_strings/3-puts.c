#include <stdio.h>
#include "main.h"

/**
 * starting point 
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: pointer value
 * ending point: return 0 success
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}
