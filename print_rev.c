#include "main.h"
#include <stdio.h>
/**
* print_rev - prints string in reverse
* @l: argument
* @f: pointer
* Return: returns length of the printed string
*/
int print_rev(va_list l, flags_t *f)
{
	int i = 0, j;
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";

	while (s[i])

		i++;

	for (j = i - 1; j >= 0; j--)

		_putchar(s[j]);

	return (i);
}
