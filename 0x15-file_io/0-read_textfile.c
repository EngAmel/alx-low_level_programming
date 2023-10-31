#include "main.h"

/**
 * read_textfile - Reads a file.
 * @filename:input
 * @letters:input
 *
 * Return:number of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wt;
	char *bfr;

	if (filename == NULL)
		return (0);
	bfr = malloc(sizeof(char) * letters);
	if (bfr == NULL)
		return (0);
	opn = open(filename, O_RDONLY);
	rd = read(opn, bfr, letters);
	wt = write(STDOUT_FILENO, bfr, rd);
	if (opn == -1 || rd == -1 || wt == -1 || wt != rd)
	{
		free(bfr);
		return (0);
	}

	free(bfr);
	close(opn);
	return (wt);
}
