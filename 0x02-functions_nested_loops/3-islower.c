#include "main.h"

/**
 * starting point 
 * _islower - check if a character is a lowercase if YES it returns 1
 * otherwise returns 0 just like islower () function in ctype.h
 * @c: is the int value to compared with the ASCII value
 * ending point: return 0 if successful
 *
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return(1);
	else 
		return(0);

}
