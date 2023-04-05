#include "stdio.h"

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

int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}

