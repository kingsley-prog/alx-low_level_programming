/**
 * print_alphabet - print lowercase letter
 */
void print_alphabet(void)
{
	char c;

	for (c = '\x61'; c <= '\x7A'; c++)
		_putchar(c);
	_putchar('\x0A');
}
