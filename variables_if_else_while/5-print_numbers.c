#include <stdio.h>
/**
 * main -main function prints all single digit numbers of base
 * starting from 0 to 10
 * Return: 0.
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");
	return (0);
}
