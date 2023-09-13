#include"main.h"

/**
 * print_to_98 - print to 98
 *
 * @n:number will be start with
 * Return:Always 0 (Success)
*/

void print_to_98(int n)
{
	int i;

	if (n < 98)
		for (i = n; i <= 98; i++)
		{
			printf("%i", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
	else
		for (i = n; i >= 98; i--)
		{
			printf("%i", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	putchar('\n');
}
