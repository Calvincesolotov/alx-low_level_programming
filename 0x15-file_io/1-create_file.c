#include "main.h"
/**
 * create_file -a function that creates a file
 * @text_content: is a NULL terminated string to write to the file
 * @filename: name of file
 *
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o , w, lenth = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenth = 0; text_content[lenth];)
			lenth++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, lenth);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
