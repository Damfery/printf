#include "main.h"
#include <stdio.h>
/**
 * print_string - loops through and prints characters
 * @l: va_list arguments
 * @f: pointer
 * Return: returns number of char printed
 */
int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);
	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}
/**
 * print_char - prints character
 * @l: va_list arguments
 * @f: pointer
 * Return: returns number of char printed
 */
int print_char(va_list l, flags_t *f)
{
	(void)f;

	_putchar(va_arg(l, int));

	return (1);
}
/**
 * print_percent - prints percent sign
 * @l: character to print
 * @f: flag
 * Return: returns character
 */
int print_percent(va_list l, flags_t *f)
{
	(void)l;
	(void)f;

	return (_putchar('%'));
}
