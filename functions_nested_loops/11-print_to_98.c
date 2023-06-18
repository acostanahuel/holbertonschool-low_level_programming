/**
 * print_to_98 - prints till 98
 * @n: initial number
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		print_to_98_recursive(n);
	}
	else if (n < 98)
	{
		print_to_98_recursive(n);
	}
	else
	{
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}

	putchar('\n');
}
