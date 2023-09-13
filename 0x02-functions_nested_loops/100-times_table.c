#include"main.h"
/**
 * print_times_table - print time table
 * @n:number will find its timetable
*/

void print_times_table(int n)
{
	int i, j, multi;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			multi = i * j;
			printf("%i", multi);
			if (j != n)
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	}
}
