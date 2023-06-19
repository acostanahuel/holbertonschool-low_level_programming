#include "main.h"
/**
 * _isdigit - Checks digit
 * @c: Input value
 * Return: 1 if uppercase, 0 if else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
