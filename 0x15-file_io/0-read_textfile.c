#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - fn that reads a file
 * @filename:pointer to name of the file
 * @letters:the content of the filename
 * Return:0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *bafa;

	if (filename == NULL)
		return (0);

	bafa = malloc(sizeof(char) * letters);
	if (bafa == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, bafa, letters);
	w = write(STDOUT_FILENO, bafa, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(bafa);
		return (0);
	}

	free(bafa);
	close(o);

	return (w);
}
