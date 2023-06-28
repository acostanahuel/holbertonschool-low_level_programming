#include "main.h"

/**
*@s: string
*
*_strlen_recursion - aaaa
*/


int _strlen_recursion(char *s)
{	
int i = 0;

if (*s)
{
i++;
i += _strlen_recursion (s + 1);
}

return (i);
}
