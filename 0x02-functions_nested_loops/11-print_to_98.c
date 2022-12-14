#include "main.h"
#include "stdio.h"

/**
 * starting point
 * print_to_98 - prints all natural numbers to 98
 * @n: number provided by user
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		or (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
