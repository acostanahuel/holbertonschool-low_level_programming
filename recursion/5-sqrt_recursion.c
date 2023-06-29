#include "main.h"


int
findsquare(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i == n)
		return (-1);
	else
		return (findsquare(n, ++i));
	return (0);
}




int
_sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (findsquare(n, 1));
}
