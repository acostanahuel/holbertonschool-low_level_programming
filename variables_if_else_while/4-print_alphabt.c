#include <stdio.h>
/*
 * main -main function alphabtttttt
 *
 * Description: This function prints alphabet without e and q
 *
 * Return: Always 0 (Success)
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
