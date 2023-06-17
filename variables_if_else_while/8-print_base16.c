#include <stdio.h>
/**
 * main -main prints numbers of hexadecimal in lowercase
 * Return: 0
 */
int main(void)
{
	char hexa;

	for (hexa = '0'; hexa <= 'f'; hexa++)
	{
		if (!(hexa > '9' && hexa < 'a'))
			putchar(hexa);
	}
	putchar('\n');

	return (0);
}
