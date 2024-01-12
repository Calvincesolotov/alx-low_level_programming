#include "main.h"

/**
 * append_text_to_file - function tha appends text at the end of a file.
 * @filename: A pointer to named file.
 * @text_content: The string to be added to the end of the file.
 *
 * Return: 1 on success and -1 of failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, strin = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (strin = 0; text_content[strin];)
			strin++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, strin);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
