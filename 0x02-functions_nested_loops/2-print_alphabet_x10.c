#include  "main.h"
/**
 * print_alphabetx10 - wirte the the lower-case alphabet on line.
 *
 *
 *
 *
 *
 *
 */
void print_alphabet_x10(void)
{
	 char c;
	 int i;
		for (i = 0; i < 10 ; i++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
