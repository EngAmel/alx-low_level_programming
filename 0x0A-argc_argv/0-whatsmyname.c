#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description:C programm use argc and argv
 * @argv:valu
 * @argc:counter
 * Return:Always 0 (Success)
 **/

int main(int argc __atribute__((unused)), char const *argv[])
{
	printf("%s \n", argv[0]);
	return (0);
}
