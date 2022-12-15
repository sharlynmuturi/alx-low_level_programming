#include "main.h"

/**
 * more_numbers - prints 10 times numbers 0 to 14
 *
 *
 */

void more_numbers(void)
{
	int count = 0;

	while (count <= 9)
	{
		int morenum = 0;

		while (morenum <= 14)
		{
			if (morenum > 9)
				_putchar(morenum / 10 + '0');
			_putchar(morenum % 10 + '0');
		morenum++;
		}
	_putchar('\n');
	count++;
	}
}

