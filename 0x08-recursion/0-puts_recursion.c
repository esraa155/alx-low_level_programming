#include "main.h"

void _puts_recursion(char *c)
{

	if (*c == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*c);
		_puts_recursion(c + 1);
	}

}

