#include "main.h"

void _puts_recursion(char *h)
{

	if (*h == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*h);
		_puts_recursion(h + 1);
	}

}

