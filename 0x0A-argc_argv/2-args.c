#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:C programm use argc and argv
 * @argv:valu
 * @argc:counter
 * Return:Always 0 (Success)
 **/

int main(int argc, char const *argv[])
{
	int i = 0;

	for (; argc--; i++)
		printf("%s\n", argv[i]);
	return (0);
}

