#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:C programm use printf function
 *
 * Return:Always 0 (Success)
 *
*/

int main(void)
{
	int n1 = 0, n2, n3;

	for (; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			for (n3 = 0; n3 <= 9; n3++)
			if (n1 != n2 && n1 < n2 && n2 != n3 && n2 < n3)
			{
				putchar(n1 + 48);
				putchar(n2 + 48);
				putchar(n3 + 48);

				if  (n1 + n2 + n3 != 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
