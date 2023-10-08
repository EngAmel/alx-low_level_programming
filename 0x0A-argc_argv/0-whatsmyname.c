#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:C programm use argc and argv
 * @argv:valu
 * @argc:counter
 * Return:Always 0 (Success)
 **/

int main(int argc __attribute__((unused)), char const *argv[])
{
	printf("%s \n", argv[argc - 1]);
	return (0);
}
