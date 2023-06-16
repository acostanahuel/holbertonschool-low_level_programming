#include <stdio.h>
/*
 * main -alphajjj
 * return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
		putchar("%c", letter);
		}
	}
	putchar('\n');
return (0);
}
