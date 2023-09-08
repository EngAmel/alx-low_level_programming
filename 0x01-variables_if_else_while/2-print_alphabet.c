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
	for (int ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (tolower(ch));
	}
	putchar ('\n');
	return (0);

}
