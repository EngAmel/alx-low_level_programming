#include"main.h"
/**
 * print_times_table - print time table
 * @n:number will find its timetable
*/

void print_times_table(int n)
{
	int i, j, multi;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			multi = i * j;
			printf("%i", multi);
			if (j != n)
			{
				printf(",");
				if (multi / 10 == 0)
					printf("   ");
				else if (multi / 100 == 0)
					printf("  ");
				else if (multi / 1000 == 0)
					printf(" ");
			}
		}
		printf("\n");
	}
	}
}
