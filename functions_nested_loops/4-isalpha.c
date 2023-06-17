#include <stdio.h>
#include "main.h"
/**
 *_islower - Return 1 if c is a letter or 0 otherwhise
 *@c: input number
 *Return 1 if c is a letter, 0 if else
 */
int _isalpha(int c)
{ 
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return  (1);
	else
		return (0);
}
