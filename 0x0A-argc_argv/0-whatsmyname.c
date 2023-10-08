#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:C programm use argc and argv
 * @argv:valu
 * @argc:counter
 * Return:Always 0 (Success)
 **/

int main(int argc, char *argv[])
{
	printf("%s \n", argv[argc - 1]);
	(void)argc;
}
