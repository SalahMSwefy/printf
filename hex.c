#include "main.h"

/**
 * hex - prints an hexgecimal number.
 * @num: number to print.
 * Return: counter.
 */
int hex(unsigned long int num)
{
	char *res;
	char hexa[] = "0123456789abcdef";
	int cntr = 0, l = 0;

	res = malloc(sizeof(char) * 8);
	if (res == NULL)
		return (-1);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		res[l] = hexa[num % 16];
		num /= 16;
		l++;
		cntr++;
	}
	while (l--)
		_putchar(res[l]);
	free(res);
	return (cntr);
}
/**
 * HEX - prints an hexgecimal number.
 * @num: number to print.
 * Return: counter.
 */
int HEX(unsigned long int num)
{
	char *res;
	char hexa[] = "0123456789ABCDEF";
	int cntr = 0, l = 0;

	res = malloc(sizeof(char) * 8);
	if (res == NULL)
		return (-1);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		res[l] = hexa[num % 16];
		num /= 16;
		l++;
		cntr++;
	}
	while (l--)
		_putchar(res[l]);
	free(res);
	return (cntr);
}
