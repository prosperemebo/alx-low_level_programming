#include "main.h"

/**
 * create_file - creates a file with given text content
 * @filename: the name of the file to create
 * @text_content: the content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, result, length = 0;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[length])
			length++;

		result = write(file_descriptor, text_content, length);
		if (result < 0)
			return (-1);
	}

	close(file_descriptor);
	return (1);
}
