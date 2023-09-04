#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Filename
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the file exist. -1 if the file doed not exist
 * or if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
