#include "main.h"
#include <stdio.h>
/**
* print_bigS - Non printable characters
* @l: va_list arguments
* @f: pointer
* Return: returns number of char printed
*/
int print_bigS(va_list l, flags_t *f)
{
	int i, count = 0;
	char *res;
	char *s = va_arg(l, char *);
	(void)f;

	if (!s)
		return (_puts("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			count += 2;
			res = convert(s[i], 16, 0);

			if (!res[1])
				count += _putchar('0');
			count += _puts(res);
		}

		else
			count += _putchar(s[i]);
	}

	return (count);

}
