#include <stdio.h>
/**
 * main -mainprints alphabet without e and q
 *
 * Return: 0
 */
int main(void)  /*function*/
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
	putchar ('\n');

return (0);
}
